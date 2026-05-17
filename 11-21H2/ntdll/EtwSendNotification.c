/*
 * XREFs of EtwSendNotification @ 0x180004BE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x180004D10 (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 __fastcall EtwSendNotification(int *a1, int a2, char *a3, __int64 a4, __int64 a5)
{
  char v5; // bp
  int v8; // esi
  NTSTATUS v11; // eax
  int v12; // r8d
  ULONG v13; // edi
  int v15; // r9d
  void *v16; // rbp
  int v17; // r10d
  char *v18; // rax
  int v19; // [rsp+40h] [rbp-E8h]
  char v20; // [rsp+58h] [rbp-D0h] BYREF

  v5 = *((_BYTE *)a1 + 12);
  v8 = a1[4];
  if ( v5 == 1 )
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( !v8 )
      v8 = 60000;
  }
  v11 = NtTraceControl(17LL, a1, (unsigned int)a1[1]);
  if ( v11 )
    v13 = RtlNtStatusToDosError(v11);
  else
    v13 = 0;
  if ( v5 )
  {
    v15 = a1[5];
    if ( !v13 )
    {
      v16 = (void *)*((_QWORD *)a1 + 3);
      if ( v15 )
      {
        v17 = 120;
        v19 = *a1;
        v18 = &v20;
        if ( *a1 != 3 )
        {
          v17 = a2;
          v18 = a3;
        }
        LOBYTE(v12) = v19 == 3;
        v13 = EtwpReceiveReplyDataBlock((_DWORD)v16, v8, v12, v15, (__int64)v18, v17, a4, a5, v19);
      }
      if ( v16 )
        NtClose(v16);
    }
  }
  return v13;
}
