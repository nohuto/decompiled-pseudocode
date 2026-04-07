/*
 * XREFs of sub_180008CC8 @ 0x180008CC8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180008CC8(
        CSecondaryWindowRepresentation *a1,
        const struct CSecondaryWindowRepresentation *a2,
        int a3)
{
  char v3; // of
  int *v4; // rax

  if ( v3 )
  {
    *v4 >>= 1;
    __asm { icebp }
    CSecondaryWindowRepresentation::OnSWRInvalidated(a1, a2);
  }
  else
  {
    McTemplateU0q_EtwEventWriteTransfer((__int64)a1, (int)a2, a3);
  }
}
