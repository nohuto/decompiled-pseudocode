/*
 * XREFs of sub_140294C30 @ 0x140294C30
 * Callers:
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 * Callees:
 *     sub_140294CA4 @ 0x140294CA4 (sub_140294CA4.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403E1950 (bsearch_s.c)
 *     RtlRestoreContext @ 0x140429CA0 (RtlRestoreContext.c)
 *     sub_14042ABB0 @ 0x14042ABB0 (sub_14042ABB0.c)
 *     sub_1405EEC28 @ 0x1405EEC28 (sub_1405EEC28.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

void __fastcall sub_140294C30(PCONTEXT ContextRecord, _EXCEPTION_RECORD *ExceptionRecord)
{
  void *Rip; // rsi
  PVOID v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  rsize_t v8; // r8
  unsigned int v9; // eax
  int Key; // [rsp+58h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+60h] [rbp+18h] BYREF

  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      if ( !(_BYTE)byte_140E01841 )
        sub_1405EEC28(*(PVOID *)(ExceptionRecord->ExceptionInformation[0] + 80));
    }
    else if ( ExceptionRecord->ExceptionCode == -1073741785 && !(_BYTE)byte_140E01841 )
    {
      Rip = (void *)ContextRecord->Rip;
      BaseOfImage = 0LL;
      if ( (unsigned int)sub_140294CA4() )
      {
        RtlPcToFileHeader(Rip, &BaseOfImage);
        v5 = BaseOfImage;
        if ( BaseOfImage )
        {
          v6 = sub_14075AEA4(BaseOfImage);
          v7 = v6;
          if ( v6 )
          {
            if ( *(_DWORD *)v6 >= 0x118u
              && (*(_DWORD *)(v6 + 144) & 0x400000) != 0
              && *(_QWORD *)(v6 + 264) > (unsigned __int64)v5 )
            {
              Key = (_DWORD)Rip - (_DWORD)v5;
              v8 = *(_QWORD *)(v6 + 272);
              v9 = (*(_DWORD *)(v6 + 144) >> 28) + 4;
              if ( !v8 || !bsearch_s(&Key, *(const void **)(v7 + 264), v8, v9, sub_1403730F0, 0LL) )
                sub_14042ABB0(38LL, Rip);
            }
          }
        }
      }
    }
  }
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
