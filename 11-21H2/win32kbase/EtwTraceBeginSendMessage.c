/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1C0093190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C014C390 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqqqqq_EtwWriteTransfer @ 0x1C014F55C (McTemplateK0cppppqqqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginSendMessage(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  int v4; // r9d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  if ( (W32kEtwEnabledKeyword & 0x400000000400000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x400000000400000LL) != 0
    && (qword_1C028DB28 & 0x400000000400000LL) == qword_1C028DB28 )
  {
    LOBYTE(v2) = 0;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      PsGetThreadId(**(PETHREAD **)(a1 + 40));
      v3 = *(__int64 **)(a1 + 112);
      if ( v3 )
        v2 = *v3;
      LOBYTE(v4) = GetCallbackCount();
      McTemplateK0cppppqqqqq_EtwWriteTransfer(v6, v5, v7, v4, a1, v2);
    }
  }
}
