/*
 * XREFs of RhpCaptureSnapshots @ 0x18008F7DC
 * Callers:
 *     ReportHangInternal @ 0x180052C14 (ReportHangInternal.c)
 *     ReportHangInternal2 @ 0x18008F598 (ReportHangInternal2.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x1800472D4 (RtlQueryResourcePolicy.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

int __fastcall RhpCaptureSnapshots(_QWORD *a1, _OWORD *a2, __m128i *a3, int a4, int *a5)
{
  int result; // eax
  __int64 v9; // rdx
  __m128i si128; // xmm1
  int *v11; // rbx
  void *v12; // rax
  void *v13; // rdx
  int v14; // eax
  void *v15; // rcx
  int v16; // ebx
  void *ProcessHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-18h] BYREF
  int v20; // [rsp+68h] [rbp+20h] BYREF

  v20 = a4;
  result = (unsigned int)memset_0(a1, 0, 0x80uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v11 = a5;
  *a2 = 0LL;
  *a3 = si128;
  a3[1] = si128;
  a3[2] = si128;
  a3[3] = si128;
  if ( *v11 )
  {
    result = RtlQueryResourcePolicy(0, v9, (__int64)&v20);
    if ( result < 0 || v20 > 10 )
    {
      v12 = (void *)*v11;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v12;
      result = NtOpenProcess(&ProcessHandle, 0x4D0u, (POBJECT_ATTRIBUTES)&ObjectAttributes, &ClientId);
      a3->m128i_i32[0] = result;
      if ( result >= 0 )
      {
        v13 = ProcessHandle;
        *a1 = 0LL;
        v18 = 0LL;
        v14 = PssNtCaptureSnapshot(&v18, v13, 3690994175LL, 1048607LL);
        v15 = ProcessHandle;
        v16 = v14;
        a3->m128i_i32[0] = v14;
        result = NtClose(v15);
        if ( v16 >= 0 )
        {
          result = v18;
          *a1 = v18;
          *(_BYTE *)a2 = 8;
        }
      }
    }
    else
    {
      a3->m128i_i32[0] = -1073741801;
    }
  }
  return result;
}
