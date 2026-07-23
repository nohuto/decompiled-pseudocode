/*
 * XREFs of sub_140417B94 @ 0x140417B94
 * Callers:
 *     sub_1402A41A4 @ 0x1402A41A4 (sub_1402A41A4.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140556608 @ 0x140556608 (sub_140556608.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 */

__int64 __fastcall sub_140417B94(PIRP Irp, char a2, char a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax

  v8 = 0;
  while ( (*(_BYTE *)a4 & 0x7F) != 0 || !a4[1] )
  {
    v9 = KeWaitForSingleObject(a4, Executive, a3 != 0 ? a2 : 0, 1u, 0LL);
    v8 = v9;
    if ( v9 != 257 && v9 != 192 )
      break;
    if ( a3 || (*((_DWORD *)KeGetCurrentThread() + 344) & 1) != 0 || (unsigned __int8)sub_140556608(a4, Irp) )
    {
      sub_140661B8C(a4, Irp);
      return (unsigned int)-1073741536;
    }
  }
  return v8;
}
