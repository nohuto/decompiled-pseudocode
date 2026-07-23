/*
 * XREFs of sub_140677460 @ 0x140677460
 * Callers:
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     sub_1409D3004 @ 0x1409D3004 (sub_1409D3004.c)
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 */

__int64 __fastcall sub_140677460(
        unsigned __int8 *a1,
        void *a2,
        _QWORD *a3,
        ULONG *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int v9; // esi
  unsigned int v14; // ebp
  int v15; // ecx
  ULONG v17; // edi
  int v18; // ebx
  ULONG v19; // ecx
  int v20; // r9d
  unsigned int v21; // eax
  __int64 v22; // rax

  v9 = *a1;
  *a3 = 0LL;
  *a4 = 0;
  v14 = 0;
  if ( (unsigned __int8)v9 <= 0x12u )
  {
    v15 = 271872;
    if ( _bittest(&v15, v9) )
    {
LABEL_6:
      v17 = *((unsigned __int16 *)a1 + 1) - RtlLengthSid(a2) - 8;
      goto LABEL_8;
    }
  }
  if ( (_BYTE)v9 != 11 )
  {
    if ( (_BYTE)v9 != 21 )
      return v14;
    goto LABEL_6;
  }
  v18 = *((_DWORD *)a1 + 2);
  v17 = *((unsigned __int16 *)a1 + 1) - 16 * (v18 & 1) - 8 * (v18 & 2) - RtlLengthSid(a2) - 12;
LABEL_8:
  *a4 = v17;
  if ( v17 )
  {
    v19 = (_DWORD)a2 + RtlLengthSid(a2);
    if ( (_BYTE)v9 == 18 )
      v21 = sub_1409D3004(v19, v17, a6, a7, a8, a9, (__int64)a3);
    else
      v21 = sub_1409D3874(v19, v17, (_DWORD)a3, v20, a6, a7, a8, a9);
    v14 = v21;
    if ( !v21 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)(*a3 + 2 * v22) );
      *a5 += 2 * v22 + 2;
    }
  }
  return v14;
}
