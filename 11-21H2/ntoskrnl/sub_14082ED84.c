/*
 * XREFs of sub_14082ED84 @ 0x14082ED84
 * Callers:
 *     sub_14082ECCC @ 0x14082ECCC (sub_14082ECCC.c)
 *     sub_140B10F48 @ 0x140B10F48 (sub_140B10F48.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A7BE34 @ 0x140A7BE34 (sub_140A7BE34.c)
 *     sub_140A7C528 @ 0x140A7C528 (sub_140A7C528.c)
 */

__int64 __fastcall sub_14082ED84(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v6)(UNICODE_STRING *); // r14
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  wchar_t *v9; // rdi
  unsigned int Length; // ebx
  const void *v11; // rdx
  unsigned __int16 v12; // cx
  wchar_t *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edi
  int v16; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(void **)(a1 + 48);
  Destination = 0LL;
  Source = 0LL;
  result = (__int64)RtlFindExportedRoutineByName(v4, "DllInitialize");
  v6 = (__int64 (__fastcall *)(UNICODE_STRING *))result;
  if ( result )
  {
    v7 = *(_WORD *)(a1 + 88);
    if ( (unsigned __int16)(v7 + 2) < v7 )
    {
      return 3221225734LL;
    }
    else
    {
      Source.MaximumLength = v7 + 2;
      v8 = (wchar_t *)sub_1402828F0(256, (unsigned __int16)(v7 + 2), 0x54446D4Du);
      Source.Buffer = v8;
      v9 = v8;
      if ( v8 )
      {
        v11 = *(const void **)(a1 + 96);
        Source.Length = *(_WORD *)(a1 + 88);
        Length = Source.Length;
        memmove(v8, v11, Source.Length);
        v12 = stru_140D3CC80.Length + Source.Length;
        if ( (unsigned __int16)(stru_140D3CC80.Length + Source.Length) <= stru_140D3CC80.Length
          || (unsigned __int16)(v12 + 4) < v12 )
        {
          v16 = -1073741562;
        }
        else
        {
          Destination.MaximumLength = v12 + 4;
          Destination.Buffer = (wchar_t *)sub_1402828F0(64, (unsigned __int16)(v12 + 4), 0x54446D4Du);
          if ( Destination.Buffer )
          {
            Destination.Length = stru_140D3CC80.Length;
            memmove(Destination.Buffer, stru_140D3CC80.Buffer, stru_140D3CC80.Length);
            RtlAppendUnicodeToString(&Destination, asc_140865B20);
            v9[(unsigned __int64)Length >> 1] = 0;
            v13 = wcschr(v9, 0x2Eu);
            if ( v13 )
            {
              LOWORD(Length) = 2 * (v13 - v9);
              Source.Length = Length;
            }
            v9[(unsigned __int64)(unsigned __int16)Length >> 1] = 0;
            RtlAppendUnicodeStringToString(&Destination, &Source);
            ExFreePoolWithTag(v9, 0);
            v15 = sub_140A7BE34(v14);
            v16 = v6(&Destination);
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( v16 >= 0 && !byte_140C4F4A8 )
              sub_140A7C528(v15, a2);
            return (unsigned int)v16;
          }
          v16 = -1073741670;
        }
        ExFreePoolWithTag(v9, 0);
        return (unsigned int)v16;
      }
      return 3221225626LL;
    }
  }
  return result;
}
