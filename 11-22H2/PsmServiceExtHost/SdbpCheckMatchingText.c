/*
 * XREFs of SdbpCheckMatchingText @ 0x1800957C0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpCheckMatchingTextEntry @ 0x1800958F8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x180096524 (SdbpGetMatchingTextAttributes.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingText(_DWORD *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // edi
  __int64 v9; // rbx
  int v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  int v15[2]; // [rsp+68h] [rbp-8h] BYREF
  int v16; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v16 = 0x2000;
  *a1 = 0;
  v13 = 0LL;
  *(_QWORD *)v15 = 0LL;
  P = 0LL;
  v12 = 0;
  v11 = 0;
  if ( (unsigned int)SdbpGetMatchingTextAttributes(
                       a3,
                       a5,
                       (unsigned int)v15,
                       (unsigned int)&P,
                       (__int64)&v12,
                       (__int64)&v11,
                       (__int64)&v16) )
  {
    v9 = a6;
    if ( (unsigned int)SdbpCheckMatchingTextEntry(
                         a2,
                         a6,
                         v15[0],
                         (int)P,
                         v12,
                         v11,
                         v16,
                         (char *)&v13 + 4,
                         (__int64)&v13) )
    {
      v6 = 1;
      *(_DWORD *)(v9 + 80) |= v13;
      *a1 = HIDWORD(v13);
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingText",
        2183,
        (unsigned int)"Failed to check MATCHING_TEXT entry");
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingText", 2166, (unsigned int)"Failed to read MATCHING_TEXT entry");
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return v6;
}
