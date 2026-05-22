/*
 * XREFs of ?GetTrustLevel@NestableRuntimeClass@WRL2@Microsoft@@MEAAJPEAW4TrustLevel@@@Z @ 0x18008F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestableRuntimeClass::GetTrustLevel(
        Microsoft::WRL2::NestableRuntimeClass *this,
        enum TrustLevel *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(enum TrustLevel *)(*((_QWORD *)this + 1) + 32LL);
  return result;
}
