/*
 * XREFs of HMInitHandleTable @ 0x1C02E3220
 * Callers:
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0057420 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  _WORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 result; // rax

  v0 = gpvSharedBase;
  gHandlePages = 0LL;
  qword_1C0294A90 = 0LL;
  qword_1C0294A88 = 0LL;
  v1 = gpKernelHandleTable;
  qword_1C0294B68 = (struct _HANDLEENTRY *)gpvSharedBase;
  dword_1C0294B70 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v1 = 0LL;
    result = 1LL;
    v0[13] = 1;
    *((_BYTE *)v0 + 24) = 0;
    qword_1C0294A88 = 2LL;
  }
  else
  {
    qword_1C0294B68 = 0LL;
    return 0LL;
  }
  return result;
}
