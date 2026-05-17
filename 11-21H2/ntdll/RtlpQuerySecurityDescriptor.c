/*
 * XREFs of RtlpQuerySecurityDescriptor @ 0x18007213C
 * Callers:
 *     RtlCopySecurityDescriptor @ 0x180071D40 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x180071E00 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x180071FE0 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008FF50 (RtlSelfRelativeToAbsoluteSD2.c)
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
      goto LABEL_6;
    }
    v10 = a1 + *(unsigned int *)(a1 + 4);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
  }
  *a2 = v10;
  if ( !v10 )
  {
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v11 = (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
LABEL_7:
  *a3 = v11;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_31;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_31:
    *a6 = 0LL;
    goto LABEL_32;
  }
  v12 = a1 + *(unsigned int *)(a1 + 16);
LABEL_10:
  *a6 = v12;
  if ( v12 )
  {
    v13 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
    goto LABEL_12;
  }
LABEL_32:
  v13 = 0;
LABEL_12:
  *a7 = v13;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
    {
      *a4 = 0LL;
      goto LABEL_17;
    }
    v14 = a1 + *(unsigned int *)(a1 + 8);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  *a4 = v14;
  if ( v14 )
  {
    v15 = (4 * *(unsigned __int8 *)(v14 + 1) + 11) & 0xFFFFFFFC;
    goto LABEL_18;
  }
LABEL_17:
  v15 = 0;
LABEL_18:
  *a5 = v15;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
  {
LABEL_19:
    *a8 = 0LL;
    goto LABEL_24;
  }
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 12) )
      goto LABEL_19;
    v16 = a1 + *(unsigned int *)(a1 + 12);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 24);
  }
  *a8 = v16;
  if ( v16 )
    v9 = (*(unsigned __int16 *)(v16 + 2) + 3) & 0xFFFFFFFC;
LABEL_24:
  result = a9;
  *a9 = v9;
  return result;
}
