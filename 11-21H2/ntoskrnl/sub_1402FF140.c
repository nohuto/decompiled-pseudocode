/*
 * XREFs of sub_1402FF140 @ 0x1402FF140
 * Callers:
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     sub_140235F70 @ 0x140235F70 (sub_140235F70.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_140264320 @ 0x140264320 (sub_140264320.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_140292BA4 @ 0x140292BA4 (sub_140292BA4.c)
 *     sub_1402D9830 @ 0x1402D9830 (sub_1402D9830.c)
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     KeAndAffinityEx @ 0x14056C0C0 (KeAndAffinityEx.c)
 *     KeAndAffinityEx2 @ 0x14056C0E0 (KeAndAffinityEx2.c)
 *     sub_1406CC024 @ 0x1406CC024 (sub_1406CC024.c)
 *     sub_140962018 @ 0x140962018 (sub_140962018.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402FF140(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3, unsigned __int16 a4)
{
  _BYTE *v8; // r9
  unsigned __int16 v9; // r8
  unsigned int v10; // r10d
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rdx
  _BYTE v17[272]; // [rsp+20h] [rbp-128h] BYREF

  memset(v17, 0, 0x108uLL);
  v8 = v17;
  v9 = 32;
  if ( a3 )
  {
    v8 = a3;
    v9 = a4;
  }
  v10 = 0;
  *((_WORD *)v8 + 1) = v9;
  v11 = *a2;
  if ( *a1 < *a2 )
    v11 = *a1;
  *(_WORD *)v8 = v11;
  if ( v11 > v9 )
    *(_WORD *)v8 = v9;
  else
    v9 = v11;
  v12 = 0;
  if ( v9 )
  {
    do
    {
      v13 = 4LL * v12;
      v14 = (*(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4]) == 0LL;
      *(_QWORD *)&v8[v13 * 2 + 8] = *(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4];
      if ( !v14 )
        v10 = 1;
      ++v12;
    }
    while ( v12 < *(_WORD *)v8 );
  }
  if ( v8 != v17 )
  {
    for ( *((_DWORD *)v8 + 1) = 0; v12 < *((_WORD *)v8 + 1); *(_QWORD *)&v8[8 * v15 + 8] = 0LL )
      v15 = v12++;
  }
  return v10;
}
