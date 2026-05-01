/*
 * XREFs of _lambda_a9307fb14462ef19126b81021743ae0c_::operator() @ 0x1801334D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___::Run @ 0x1801334C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___--Run.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_a9307fb14462ef19126b81021743ae0c_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  PCWSTR StringRawBuffer; // rdi
  int v5; // eax
  int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+30h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 280LL) + 184LL))(
             *(_QWORD *)(*a1 + 280LL),
             &v7);
  v3 = v7;
  if ( !v7 )
    goto LABEL_9;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 304LL), 0LL);
  v8 = -1LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 584LL))(*a1 + 8LL, &v8);
  v5 = *((_DWORD *)a1 + 6);
  if ( !v5 )
  {
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v7 + 24LL))(
      v7,
      StringRawBuffer,
      v8,
      a1[2],
      0);
    goto LABEL_5;
  }
  result = (unsigned int)(v5 - 1);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 280LL) + 208LL))(
        *(_QWORD *)(*a1 + 280LL),
        &SRWLock);
      v6 = ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1) - 4 > 1) + 2;
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = (*(__int64 (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v7 + 24LL))(
                 v7,
                 StringRawBuffer,
                 v8,
                 a1[2],
                 v6);
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v7 + 24LL))(
               v7,
               StringRawBuffer,
               v8,
               a1[2],
               1);
  }
  v3 = v7;
LABEL_9:
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
