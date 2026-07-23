/*
 * XREFs of WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140644510 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140644630 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_1406447D0 @ 0x1406447D0 (sub_1406447D0.c)
 *     sub_1406447EC @ 0x1406447EC (sub_1406447EC.c)
 *     sub_140644808 @ 0x140644808 (sub_140644808.c)
 */

__int64 __fastcall WheaHwErrorReportSubmitDeviceDriver(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 *v4; // rax
  __int64 v5; // rsi
  int v6; // edx
  unsigned __int64 v7; // rdi

  if ( (unsigned __int8)sub_1406447EC() )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 40) + 8LL) = *(_DWORD *)(BugCheckParameter3 + 8);
    v4 = sub_140643F2C((__int64)&unk_140CE1A98, *(_DWORD *)(BugCheckParameter3 + 12));
    v5 = (unsigned __int64)(v4 + 12) & -(__int64)(v4 != 0LL);
    if ( (unsigned __int8)sub_1406447D0(v5) )
    {
      if ( (**(_DWORD **)(BugCheckParameter3 + 16) & 0x3FF0u) >= 0x10 )
      {
        v6 = *(_DWORD *)(BugCheckParameter3 + 100);
        v7 = (*(_QWORD *)(BugCheckParameter3 + 24) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (unsigned int)(v6 + *(_DWORD *)(BugCheckParameter3 + 8)) <= *(_DWORD *)(v5 + 16) )
        {
          if ( (unsigned int)(v6 - 1) > 0x22 )
          {
            *(_DWORD *)(v7 + 88) = 0;
          }
          else
          {
            memmove(
              (void *)((*(_QWORD *)(BugCheckParameter3 + 24) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL),
              (const void *)(BugCheckParameter3 + 64),
              *(unsigned int *)(BugCheckParameter3 + 100));
            *(_DWORD *)(v7 + 88) = *(_DWORD *)(BugCheckParameter3 + 100);
            *(_WORD *)(v7 + 92) = *(_WORD *)(v5 + 60);
          }
          *(_QWORD *)(v7 + 72) = v5 + 44;
          *(_QWORD *)(v7 + 80) = *(_QWORD *)(BugCheckParameter3 + 56);
          PshedRetrieveErrorInfo(*(_QWORD *)(BugCheckParameter3 + 40), v5);
          v3 = WheaReportHwError(*(_QWORD *)(BugCheckParameter3 + 40));
          sub_140644808(BugCheckParameter3);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      return (unsigned int)-1073741130;
    }
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return v3;
}
