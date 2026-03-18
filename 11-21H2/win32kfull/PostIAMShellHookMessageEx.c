/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C00A5180
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C011CE00 (HandleDisplayChangeForInactiveDesktops.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  const struct tagWND *v5; // rax
  __int64 v6; // rcx

  if ( a1 )
  {
    v3 = a2;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 280) )
      {
        if ( a2 != 35 )
        {
          v5 = (const struct tagWND *)_HMObjectFromHandle(a3);
          if ( (_DWORD)v3 == 18 )
          {
            *((_DWORD *)v5 + 80) &= ~0x200u;
          }
          else
          {
            *((_DWORD *)v5 + 80) |= 0x200u;
            if ( (((_DWORD)v3 - 19) & 0xFFFFFFFB) == 0
              && (!gpqForeground || *(const struct tagWND **)(gpqForeground + 120LL) != v5) )
            {
              return;
            }
            if ( (_DWORD)v3 == 19 )
              CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v5);
          }
        }
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL);
        if ( v6 )
          PostMessage(v6, *(unsigned int *)(gpsi + 928LL), v3);
      }
    }
  }
}
