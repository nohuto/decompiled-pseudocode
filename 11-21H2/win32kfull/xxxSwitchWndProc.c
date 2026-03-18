/*
 * XREFs of xxxSwitchWndProc @ 0x1C01EF940
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01DE740 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     xxxCancelCoolSwitch @ 0x1C01110F4 (xxxCancelCoolSwitch.c)
 *     xxxValidateClassAndSize @ 0x1C015A2B0 (xxxValidateClassAndSize.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01EE0D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF

  v13[2] = 0LL;
  v12 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, a3, a4, 672, 1, &v12) )
    return v12;
  **((_QWORD **)a1 + 35) = a1;
  switch ( a2 )
  {
    case 1u:
      zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 17) + 88LL));
      break;
    case 0x10u:
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
      xxxCancelCoolSwitch();
      break;
    case 0x14u:
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = a1;
      HMLockObject(a1);
      xxxPaintSwitchWindow(a1);
      ThreadUnlock1(v10, v9, v11);
      return 0LL;
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
