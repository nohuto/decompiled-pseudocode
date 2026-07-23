/*
 * XREFs of sub_1402A41A4 @ 0x1402A41A4
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140417B94 @ 0x140417B94 (sub_140417B94.c)
 *     sub_140556608 @ 0x140556608 (sub_140556608.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 */

__int64 __fastcall sub_1402A41A4(PIRP Irp, unsigned int *a2, char a3)
{
  int v3; // eax
  int v7; // ebx
  NTSTATUS v8; // eax

  v3 = dword_140C0959C;
  if ( (unsigned int)dword_140C0959C >= 2 )
    v3 = (unsigned __int8)sub_14065863C();
  if ( v3 )
  {
    sub_140417B94(Irp);
  }
  else
  {
    v7 = a2[20] & 4;
    while ( (a2[38] & 0x7F) != 0 || !a2[39] )
    {
      v8 = KeWaitForSingleObject(a2 + 38, Executive, v7 != 0 ? a3 : 0, 1u, 0LL);
      if ( v8 != 257 && v8 != 192 )
        break;
      if ( v7 || (*((_DWORD *)KeGetCurrentThread() + 344) & 1) != 0 || (unsigned __int8)sub_140556608(a2 + 38, Irp) )
      {
        sub_140661B8C(a2 + 38, Irp);
        return a2[14];
      }
    }
  }
  return a2[14];
}
