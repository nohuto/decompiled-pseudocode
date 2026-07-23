/*
 * XREFs of sub_1402A2DE8 @ 0x1402A2DE8
 * Callers:
 *     sub_14024E6F0 @ 0x14024E6F0 (sub_14024E6F0.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_14054268C @ 0x14054268C (sub_14054268C.c)
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402A2DE8(__int64 a1)
{
  int v1; // edx
  _QWORD *v2; // r10
  __int64 v3; // rax
  int v4; // ebx
  int v5; // edx
  __int64 *v6; // r10
  int v7; // r8d
  char v8; // r9
  char v9; // r8
  int v10; // edx

  v1 = *(_DWORD *)(a1 + 144);
  v2 = *(_QWORD **)(a1 + 40);
  v3 = a1 + 56;
  v4 = v1 & 0x1010000;
  if ( v2 == (_QWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)v3 == v3 && (v3 = a1 + 72, *(_QWORD *)v3 == v3) )
    {
      v5 = v1 & 0x20 | 1;
    }
    else
    {
      v3 = a1 + 56;
      v5 = v1 & 0x20 | 0x3000;
      if ( *(_QWORD *)v3 == v3 )
      {
        *(_DWORD *)(a1 + 144) = v5;
        v6 = *(__int64 **)(a1 + 72);
        v7 = 0;
        while ( v6 != (__int64 *)(a1 + 72) )
        {
          if ( v7 )
          {
            LODWORD(v3) = v6[6] & 0xF00000;
            if ( (_DWORD)v3 != v7 )
            {
              v5 = v5 & 0x20 | 0x3000;
              goto LABEL_4;
            }
          }
          v7 = v6[6] & 0xF00000;
          v5 = *(_DWORD *)(a1 + 144) | v7;
          *(_DWORD *)(a1 + 144) = v5;
          v6 = (__int64 *)*v6;
        }
      }
    }
    goto LABEL_4;
  }
  if ( *(_QWORD *)v3 != v3 || (v3 = a1 + 72, *(_QWORD *)v3 != v3) )
  {
    v5 = v1 & 0x20 | 0xB000;
    goto LABEL_4;
  }
  v8 = 0;
  v9 = 0;
  do
  {
    v3 = v2[2];
    if ( *(_DWORD *)(v3 + 24) == 590400 )
    {
      v8 = 1;
    }
    else
    {
      v9 = 1;
      if ( !v8 )
        goto LABEL_20;
    }
    if ( v9 )
      goto LABEL_23;
LABEL_20:
    v2 = (_QWORD *)*v2;
    LOBYTE(v3) = v8;
  }
  while ( v2 != (_QWORD *)(a1 + 40) );
  if ( v8 && v9 )
  {
LABEL_23:
    v5 = v1 & 0x20 | 0x1010;
    goto LABEL_4;
  }
  v10 = v1 & 0x20;
  if ( v8 )
    v5 = v10 | 0x1000;
  else
    v5 = v10 | 0x10;
LABEL_4:
  *(_DWORD *)(a1 + 144) = v4 | v5;
  return v3;
}
