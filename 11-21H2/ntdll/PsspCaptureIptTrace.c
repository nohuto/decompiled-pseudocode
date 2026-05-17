/*
 * XREFs of PsspCaptureIptTrace @ 0x180061040
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     GetProcessIptTraceSize @ 0x1800610A0 (GetProcessIptTraceSize.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     GetProcessIptTrace @ 0x180126BDC (GetProcessIptTrace.c)
 */

__int64 __fastcall PsspCaptureIptTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v5; // rdi
  int v6; // esi
  int ProcessIptTrace; // eax
  _DWORD *v8; // rdx
  unsigned int v9; // edi
  int v10; // eax
  void *v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  v11 = 0LL;
  LODWORD(Size) = 0;
  Handle = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  result = GetProcessIptTraceSize(a2, &Size);
  if ( (int)result >= 0 )
  {
    v5 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      LODWORD(v12) = Size;
      result = NtCreateSection(&Handle, 983047LL, "0", &v12, 4, 0x8000000, 0LL);
      if ( (int)result >= 0 )
      {
        v6 = ZwMapViewOfSection(Handle, -1LL, &v11, 0LL, 0LL, 0LL, &v13, 1, 0, 4);
        if ( v6 >= 0 )
        {
          memset(v11, 0, v5);
          ProcessIptTrace = GetProcessIptTrace(a2, v11, (unsigned int)v5);
          v8 = v11;
          v9 = ProcessIptTrace;
          if ( ProcessIptTrace >= 0 )
          {
            *(_QWORD *)(a1 + 1128) = Handle;
            v10 = v8[1];
            *(_DWORD *)(a1 + 4) |= 0x10u;
            *(_DWORD *)(a1 + 1136) = v10 + 8;
            NtUnmapViewOfSection(-1LL);
            return 0LL;
          }
          else
          {
            NtUnmapViewOfSection(-1LL);
            NtClose(Handle);
            return v9;
          }
        }
        else
        {
          NtClose(Handle);
          return (unsigned int)v6;
        }
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
