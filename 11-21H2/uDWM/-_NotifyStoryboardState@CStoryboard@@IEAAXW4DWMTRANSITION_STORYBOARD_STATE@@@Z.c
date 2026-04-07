/*
 * XREFs of ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x1800DB520
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x1800D7700 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_NotifyStoryboardState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  LPARAM i; // rbp
  __int64 v5; // rsi
  _DWORD *v6; // rax
  unsigned int v7; // ecx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a2; (unsigned int)v2 < *(_DWORD *)(a1 + 120); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v2);
    if ( (unsigned int)GetWindowBand(*(_QWORD *)(v5 + 16), &v8) )
    {
      if ( (*(_DWORD *)(v5 + 24) & 0x400000) != 0 )
      {
LABEL_7:
        PostMessageW(*(HWND *)(v5 + 16), 0x32Au, *(int *)(a1 + 72), i);
      }
      else
      {
        v6 = &unk_180122EB0;
        v7 = 0;
        while ( v8 != *v6 )
        {
          ++v7;
          ++v6;
          if ( v7 >= 5 )
            goto LABEL_7;
        }
      }
    }
  }
}
