/*
 * XREFs of ?RefreshVolumesForAllTsSessions@@YAXXZ @ 0x18002C778
 * Callers:
 *     _lambda_225f813fb40d37af0641811230a2a49f_::operator() @ 0x180008ED8 (_lambda_225f813fb40d37af0641811230a2a49f_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void RefreshVolumesForAllTsSessions(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rdi
  __int64 v1; // rax
  __int64 *v2; // rbx
  int v3; // eax
  int v4; // eax
  int v5[2]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  int *v7; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&stru_18005C5D8);
  v1 = qword_18005C6B8;
  v2 = *(__int64 **)qword_18005C6B8;
  while ( v2 != (__int64 *)v1 )
  {
    v3 = *(_DWORD *)v2[3];
    *(_QWORD *)v5 = &off_1800488F8;
    v6 = v3;
    v7 = v5;
    v4 = QueueGenericWorkItem(v5);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86A,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v4);
    v2 = (__int64 *)*v2;
    v1 = qword_18005C6B8;
  }
  LeaveCriticalSection(&stru_18005C5D8);
  if ( v0 )
    LeaveCriticalSection(v0);
}
