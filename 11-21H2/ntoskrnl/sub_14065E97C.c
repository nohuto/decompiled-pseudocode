/*
 * XREFs of sub_14065E97C @ 0x14065E97C
 * Callers:
 *     sub_14065E5A4 @ 0x14065E5A4 (sub_14065E5A4.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E97C(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  _WORD *v5; // rdi
  unsigned int i; // ebp
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = BugCheckParameter4;
  sub_1407C97FC(&v8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter3, v3);
  else
    v4 = sub_1407C9820(BugCheckParameter3);
  v5 = (_WORD *)v4;
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
  if ( (int)sub_14071F300(BugCheckParameter3, v3) >= 0 && *v5 == 26994 )
  {
    for ( i = 0; i < (unsigned __int16)v5[1]; ++i )
    {
      if ( (int)sub_14071F300(BugCheckParameter3, *(unsigned int *)&v5[2 * i + 2]) < 0 )
        break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter3 + 80);
  sub_1402AFC00(BugCheckParameter3 + 80);
  if ( v5 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v8);
    else
      sub_1407C97C0(BugCheckParameter3, &v8);
  }
  return 0LL;
}
