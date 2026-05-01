/*
 * XREFs of ?SetEnabled@CGlyphButtonElement@@UEAAX_N@Z @ 0x1804CBE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlyphButtonElement::SetEnabled(CGlyphButtonElement *this, char a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  *((_BYTE *)this + 196) = a2;
  (*(void (**)(void))(v2 + 24))();
}
