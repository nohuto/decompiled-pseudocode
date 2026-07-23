/*
 * XREFs of sub_14022F96C @ 0x14022F96C
 * Callers:
 *     sub_14022F6A4 @ 0x14022F6A4 (sub_14022F6A4.c)
 *     sub_14022F864 @ 0x14022F864 (sub_14022F864.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B50F64 @ 0x140B50F64 (sub_140B50F64.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14022F96C(char a1)
{
  char v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  char result; // al
  __int64 v4; // rcx

  v1 = a1 & 1;
  if ( byte_140D068E5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = v1 | *((_BYTE *)CurrentPrcb + 34) & 0xFE;
    *((_BYTE *)CurrentPrcb + 34) = result;
  }
  else
  {
    v4 = qword_140D088C0[(unsigned int)dword_140C2B1C0];
    result = v1 | *(_BYTE *)(v4 + 34) & 0xFE;
    *(_BYTE *)(v4 + 34) = result;
  }
  return result;
}
