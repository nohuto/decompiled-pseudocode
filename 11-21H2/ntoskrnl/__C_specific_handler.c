/*
 * XREFs of __C_specific_handler @ 0x1403DF790
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x14041AE88 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140236890 (KeCheckStackAndTargetAddress.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     _NLG_Notify @ 0x1403E0D20 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x1403E0D50 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned int *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  int v13; // eax
  unsigned int v15; // r10d
  unsigned __int64 v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int i; // r9d
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF

  KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
  v8 = *((_QWORD *)DispatcherContext + 1);
  v9 = *(_QWORD *)DispatcherContext - v8;
  v10 = (unsigned int *)*((_QWORD *)DispatcherContext + 7);
  v11 = *((_DWORD *)DispatcherContext + 18);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v15 = *v10;
    v16 = *((_QWORD *)DispatcherContext + 4) - v8;
    if ( v11 < *v10 )
    {
      v17 = *v10;
      do
      {
        v18 = v17;
        if ( v9 >= v10[4 * v11 + 1] && v9 < v10[4 * v11 + 2] )
        {
          if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
          {
            for ( i = 0; i < v17; ++i )
            {
              if ( v16 >= v10[4 * i + 1]
                && v16 < v10[4 * i + 2]
                && v10[4 * i + 4] == v10[4 * v11 + 4]
                && v10[4 * i + 3] == v10[4 * v11 + 3] )
              {
                break;
              }
            }
            v18 = v15;
            if ( i != v15 )
              return 1;
          }
          v20 = v10[4 * v11 + 4];
          if ( (_DWORD)v20 )
          {
            if ( v16 == v20 )
              return 1;
          }
          else
          {
            *((_DWORD *)DispatcherContext + 18) = v11 + 1;
            LOBYTE(v18) = 1;
            ((void (__fastcall *)(__int64, void *))(v8 + v10[4 * v11 + 3]))(v18, EstablisherFrame);
            v15 = *v10;
            LODWORD(v18) = *v10;
          }
        }
        ++v11;
        v17 = v18;
      }
      while ( v11 < (unsigned int)v18 );
    }
  }
  else
  {
    v21[0] = ExceptionRecord;
    v21[1] = ContextRecord;
    while ( v11 < *v10 )
    {
      if ( v9 >= v10[4 * v11 + 1] && v9 < v10[4 * v11 + 2] && v10[4 * v11 + 4] )
      {
        v12 = v10[4 * v11 + 3];
        if ( (_DWORD)v12 == 1 )
          goto LABEL_10;
        v13 = ((__int64 (__fastcall *)(_QWORD *, void *))(v8 + v12))(v21, EstablisherFrame);
        if ( v13 < 0 )
          return 0;
        if ( v13 > 0 )
        {
LABEL_10:
          NLG_Notify(v8 + v10[4 * v11 + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            (ULONG_PTR)EstablisherFrame,
            v8 + v10[4 * v11 + 4],
            ExceptionRecord,
            ExceptionRecord->ExceptionCode,
            *((unsigned int **)DispatcherContext + 5),
            *((_QWORD *)DispatcherContext + 8));
          _NLG_Return2();
        }
      }
      ++v11;
    }
  }
  return 1;
}
