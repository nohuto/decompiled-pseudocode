/*
 * XREFs of ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00EB2AC
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x1C00EB160 (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     zzzDestroyCaret @ 0x1C0005F9C (zzzDestroyCaret.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall xxxMoveFocusAway(const struct tagWND *a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
  {
    LOBYTE(a2) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
    if ( (_BYTE)a2 == 64 )
    {
      v4 = *(_QWORD *)(gptiCurrent + 416LL);
      v5 = *((_QWORD *)a1 + 13);
      v9[2] = 0LL;
      v9[0] = v4;
      *(_QWORD *)(gptiCurrent + 416LL) = v9;
      v9[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      xxxSetFocus(*((struct tagWND **)a1 + 13), a2, a3);
      ThreadUnlock1(v7, v6, v8);
    }
    else
    {
      xxxSetFocus(0LL, a2, a3);
    }
  }
  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzDestroyCaret();
}
