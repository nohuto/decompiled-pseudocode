/*
 * XREFs of ?AddMark@PerformanceLogger@Utils@Spectre@@QEBAXHPEBDH00@Z @ 0x180020014
 * Callers:
 *     ??1PerformanceScope@Utils@Spectre@@QEAA@XZ @ 0x18001FE24 (--1PerformanceScope@Utils@Spectre@@QEAA@XZ.c)
 *     ?UpdateStatistics@Engine@1Spectre@@IEAAXXZ @ 0x180037D40 (-UpdateStatistics@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Utils::PerformanceLogger::AddMark(
        Spectre::Utils::PerformanceLogger *this,
        unsigned int a2,
        const char *a3,
        int a4,
        const char *a5,
        const char *a6)
{
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, const char *, _QWORD, _QWORD, const char *, const char *, int); // rbx
  _QWORD *v12; // rax
  char v13; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this) )
  {
    v10 = *(_QWORD *)this;
    v11 = *(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, const char *, const char *, int))(**(_QWORD **)this + 24LL);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 8LL))(
                      *((_QWORD *)this + 2),
                      &v13);
    v11(v10, a6, *v12, a2, a5, a3, a4);
  }
}
