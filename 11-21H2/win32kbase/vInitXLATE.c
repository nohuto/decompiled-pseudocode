/*
 * XREFs of vInitXLATE @ 0x1C02E59D4
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  dword_1C029606C = 256;
  xloIdent = 1;
  v0 = &unk_1C02960B8;
  dword_1C0296064 = 1;
  qword_1C0296070 = (__int64)&unk_1C02960B4;
  LODWORD(result) = 0;
  dword_1C02960A8 = 0;
  dword_1C0296084 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
