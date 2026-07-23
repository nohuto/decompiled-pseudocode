/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1407254F0
 * Callers:
 *     sub_14064B46C @ 0x14064B46C (sub_14064B46C.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_1406E5CB0 @ 0x1406E5CB0 (sub_1406E5CB0.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     sub_140725080 @ 0x140725080 (sub_140725080.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_140771CD0 @ 0x140771CD0 (sub_140771CD0.c)
 *     sub_140782C4C @ 0x140782C4C (sub_140782C4C.c)
 *     sub_140813344 @ 0x140813344 (sub_140813344.c)
 *     sub_14084D3DC @ 0x14084D3DC (sub_14084D3DC.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_14086240C @ 0x14086240C (sub_14086240C.c)
 *     sub_140862E50 @ 0x140862E50 (sub_140862E50.c)
 *     sub_140881DF2 @ 0x140881DF2 (sub_140881DF2.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     sub_140949D40 @ 0x140949D40 (sub_140949D40.c)
 *     sub_140A255C0 @ 0x140A255C0 (sub_140A255C0.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140B22228 @ 0x140B22228 (sub_140B22228.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 *     sub_140B2888C @ 0x140B2888C (sub_140B2888C.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG result; // eax
  __int64 v4; // rcx
  char *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rcx
  __int64 v10; // rcx
  char *v11; // rcx

  v1 = *((_WORD *)SecurityDescriptor + 1);
  result = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v4 )
      goto LABEL_7;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( v5 )
    result += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
  if ( v1 >= 0 )
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_9;
  }
LABEL_7:
  v6 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v6 )
    goto LABEL_11;
  v7 = (char *)SecurityDescriptor + v6;
LABEL_9:
  if ( v7 )
    result += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_17;
    v9 = (char *)SecurityDescriptor + v8;
  }
  if ( v9 )
    result += (*((unsigned __int16 *)v9 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v1 >= 0 )
  {
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
      return result;
    v11 = (char *)SecurityDescriptor + v10;
  }
  if ( v11 )
    result += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
  return result;
}
