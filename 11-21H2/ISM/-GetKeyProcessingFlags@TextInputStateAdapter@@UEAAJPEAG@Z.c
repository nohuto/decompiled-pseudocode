/*
 * XREFs of ?GetKeyProcessingFlags@TextInputStateAdapter@@UEAAJPEAG@Z @ 0x1801D6050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetKeyProcessingFlags(TextInputStateAdapter *this, unsigned __int16 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(**((_QWORD **)this + 4) + 280LL))(
           *((_QWORD *)this + 4),
           a2);
}
