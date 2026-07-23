/*
 * XREFs of sub_1800E4638 @ 0x1800E4638
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __noreturn sub_1800E4638(void *a1, __int64 a2)
{
  char v2; // cf
  char v3; // of
  char v4; // al

  if ( v3 )
  {
    *(_BYTE *)(a2 - 97) -= v2 + v4;
    RtlpQueryProcessDebugInformationRemote(a1);
  }
  JUMPOUT(0x1800E468DLL);
}
