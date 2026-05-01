/*
 * XREFs of sub_180013640 @ 0x180013640
 * Callers:
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 * Callees:
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_18001417C @ 0x18001417C (sub_18001417C.c)
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 *     sub_18001F13C @ 0x18001F13C (sub_18001F13C.c)
 *     sub_18001F160 @ 0x18001F160 (sub_18001F160.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

void __fastcall sub_180013640(__int64 a1, int a2, int a3)
{
  int v3; // edi
  unsigned __int64 v6; // rsi
  int v7; // ebp
  int v8; // eax
  __int64 v9; // rcx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2 - 1;
  if ( a2 - 1 >= a3 )
  {
    while ( v3 )
    {
      if ( v3 != 1 )
      {
        if ( v3 != 2 )
        {
          if ( v3 == 3 )
            sub_180013E14(a1, 0LL);
          goto LABEL_18;
        }
        v6 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
        sub_18001F1C4(v6 + 48);
        if ( (unsigned int)sub_18001F13C(a1 + 88) )
        {
          v7 = 0;
        }
        else
        {
          sub_18001F160();
          v7 = 1;
        }
        *(_DWORD *)(v6 + 56) = 0;
        RtlReleaseSRWLockExclusive(v6 + 48);
        if ( !v7 )
          goto LABEL_18;
        goto LABEL_17;
      }
      sub_18001417C(a1, 0LL);
LABEL_18:
      if ( --v3 < a3 )
        return;
    }
    sub_18001F1C4(a1 + 64);
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 104);
      v9 = a1 + 64;
      *(_DWORD *)(a1 + 72) = 0;
      if ( (v8 & 0x80u) == 0 )
        break;
      v10 = v8;
      RtlReleaseSRWLockExclusive(v9);
      RtlWaitOnAddress(a1 + 104, &v10, 4LL, 0LL);
      sub_18001F1C4(a1 + 64);
    }
    RtlReleaseSRWLockExclusive(v9);
LABEL_17:
    sub_180016348(a1);
    goto LABEL_18;
  }
}
