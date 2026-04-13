/*
 * XREFs of tidy_global @ 0x180005890
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800052BC (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x18000534C (--1_Lockit@std@@QEAA@XZ.c)
 *     _Deletegloballocale @ 0x180005838 (_Deletegloballocale.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  Deletegloballocale(&qword_180195498);
  qword_180195498 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
