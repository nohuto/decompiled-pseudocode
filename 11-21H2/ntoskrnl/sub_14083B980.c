/*
 * XREFs of sub_14083B980 @ 0x14083B980
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNextRange @ 0x14083BF90 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x14083C0A0 (RtlGetFirstRange.c)
 */

char __fastcall sub_14083B980(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 v4; // r8
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  bool v8; // cf
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  memset(v10, 0, 32);
  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
    return 0;
  RtlGetFirstRange(*(_QWORD *)(a1 + 48), v10, &v11);
  v5 = v11;
  if ( v11 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    do
    {
      v7 = *v5;
      v8 = v6 < *v5;
      if ( v6 > *v5 )
      {
        if ( v5[1] < v6 )
          goto LABEL_6;
        v8 = v6 < v7;
      }
      if ( (!v8 || *(_QWORD *)(a2 + 24) >= v7) && ((_BYTE)v5[4] & *(_BYTE *)(a2 + 67)) == 0 )
      {
        if ( v5[3] != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
          return 0;
        v2 = 1;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)a2 = v6;
      }
LABEL_6:
      LOBYTE(v4) = 1;
      RtlGetNextRange(v10, &v11, v4);
      v5 = v11;
    }
    while ( v11 );
  }
  return v2;
}
