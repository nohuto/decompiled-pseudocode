/*
 * XREFs of RtlpQuerySecurityDescriptor @ 0x18006CF94
 * Callers:
 *     RtlCopySecurityDescriptor @ 0x18006CBA0 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006CC60 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x18006CE40 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008A1A0 (RtlSelfRelativeToAbsoluteSD2.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpQuerySecurityDescriptor(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8,
        unsigned int *a9)
{
  unsigned int v9; // r10d
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int *result; // rax

  v9 = 0;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 4) )
    {
      *a2 = 0LL;
      goto LABEL_4;
    }
    v10 = a1 + *(unsigned int *)(a1 + 4);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
  }
  *a2 = v10;
  if ( v10 )
  {
    v11 = (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
    goto LABEL_5;
  }
LABEL_4:
  v11 = 0;
LABEL_5:
  *a3 = v11;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_29;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    goto LABEL_8;
  }
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_29:
    *a6 = 0LL;
    goto LABEL_30;
  }
  v12 = a1 + *(unsigned int *)(a1 + 16);
LABEL_8:
  *a6 = v12;
  if ( v12 )
  {
    v13 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
    goto LABEL_10;
  }
LABEL_30:
  v13 = 0;
LABEL_10:
  *a7 = v13;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
    {
      *a4 = 0LL;
      goto LABEL_13;
    }
    v14 = a1 + *(unsigned int *)(a1 + 8);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  *a4 = v14;
  if ( !v14 )
  {
LABEL_13:
    v15 = 0;
    goto LABEL_14;
  }
  v15 = (4 * *(unsigned __int8 *)(v14 + 1) + 11) & 0xFFFFFFFC;
LABEL_14:
  *a5 = v15;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
  {
LABEL_15:
    *a8 = 0LL;
    goto LABEL_20;
  }
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 12) )
      goto LABEL_15;
    v16 = a1 + *(unsigned int *)(a1 + 12);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 24);
  }
  *a8 = v16;
  if ( v16 )
    v9 = (*(unsigned __int16 *)(v16 + 2) + 3) & 0xFFFFFFFC;
LABEL_20:
  result = a9;
  *a9 = v9;
  return result;
}
