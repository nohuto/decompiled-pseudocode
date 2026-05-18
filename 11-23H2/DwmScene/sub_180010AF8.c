/*
 * XREFs of sub_180010AF8 @ 0x180010AF8
 * Callers:
 *     sub_180011C00 @ 0x180011C00 (sub_180011C00.c)
 *     sub_18002FC2C @ 0x18002FC2C (sub_18002FC2C.c)
 *     sub_180052654 @ 0x180052654 (sub_180052654.c)
 *     sub_18005F46C @ 0x18005F46C (sub_18005F46C.c)
 *     sub_180060AF4 @ 0x180060AF4 (sub_180060AF4.c)
 *     sub_180070704 @ 0x180070704 (sub_180070704.c)
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010AF8(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
