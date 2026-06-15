/*
 * XREFs of ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180027B60
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18000A1F0 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 */

bool __fastcall CProcess::IsScreenReaderProcess(CProcess *this)
{
  return TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 41), *((_DWORD *)this + 40), 0LL);
}
