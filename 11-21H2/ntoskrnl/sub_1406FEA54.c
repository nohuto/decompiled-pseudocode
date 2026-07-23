/*
 * XREFs of sub_1406FEA54 @ 0x1406FEA54
 * Callers:
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140914CA4 @ 0x140914CA4 (sub_140914CA4.c)
 *     sub_14091CAC0 @ 0x14091CAC0 (sub_14091CAC0.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     sub_14069FA30 @ 0x14069FA30 (sub_14069FA30.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_1406FEB88 @ 0x1406FEB88 (sub_1406FEB88.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 */

void __fastcall sub_1406FEA54(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v4; // rcx
  signed __int64 v5; // rax
  int v6; // r9d
  bool v7; // dl
  bool v8; // r8
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  v5 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v5 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v4 + 2944) == 1 )
      sub_1406CE3EC(v4);
  }
  else if ( !v5 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 32);
      sub_1407C09E0(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v9 + 160) |= 0x80u;
      *(_QWORD *)(v9 + 4176) = CurrentThread;
      *(_DWORD *)(v9 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4236), 1u) & 0x7F) + 4240) = 31;
      if ( (*(_DWORD *)(v9 + 160) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4232), 0xFFFFFFFF) == 1 )
      {
        sub_1406BBAD8((_QWORD *)v9);
      }
    }
    else
    {
      v6 = *(_DWORD *)(BugCheckParameter2 + 8);
      v7 = 0;
      if ( (v6 & 0x20000) == 0 )
        v7 = a3 == 0;
      v8 = 0;
      if ( (v6 & 0x20) == 0 )
        v8 = v7;
      if ( dword_140C0B8C0
        && (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) == 0
        || !v8 )
      {
        sub_1407C09E0(BugCheckParameter2);
        if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
          && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
        {
          sub_14069FA30(BugCheckParameter2);
        }
      }
      else
      {
        sub_1406FEB88(BugCheckParameter2);
      }
    }
  }
}
