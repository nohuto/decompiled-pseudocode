/*
 * XREFs of ?OnMarshalerRelease@CCompositionTextureBinding@DirectComposition@@UEAAXXZ @ 0x1800A04C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCompositionTextureBinding::OnMarshalerRelease(
        DirectComposition::CCompositionTextureBinding *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 2);
  --*(_DWORD *)(v1 + 64);
  *(_BYTE *)(*(_QWORD *)(v1 + 24) + 56LL) = 1;
  DirectComposition::CDelayedDestructionObject::OnMarshalerRelease(this);
}
