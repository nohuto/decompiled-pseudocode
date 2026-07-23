/*
 * XREFs of KasanWrapperRtlRestoreContext @ 0x140356D70
 * Callers:
 *     RtlRestoreContext @ 0x140429660 (RtlRestoreContext.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022EAC0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x14041F4C0 (KeGetCurrentStackPointer.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KasanWrapperRtlRestoreContext(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 CurrentStackPointer; // rax
  unsigned __int64 v4; // rdi
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rdi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v1 = &retaddr;
  v11 = 0;
  BugCheckParameter3[0] = 0LL;
  v12 = 0LL;
  if ( KasaniEnabled )
  {
    LODWORD(v1) = *(_DWORD *)(a1 + 48) & 0x100001;
    if ( (_DWORD)v1 == 1048577 )
    {
      CurrentStackPointer = KeGetCurrentStackPointer();
      if ( KeQueryCurrentStackInformationEx(CurrentStackPointer, &v11, (char **)BugCheckParameter3, &v12) )
      {
        if ( v11 )
        {
          if ( v11 != 5 && v11 != 7 && (unsigned int)(v11 - 8) >= 2 )
          {
            v4 = v12 - BugCheckParameter3[0];
            if ( KasaniEnabled )
            {
              if ( BugCheckParameter3[0] < 0xFFFF800000000000uLL )
                KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3[0], 0LL);
              if ( (BugCheckParameter3[0] & 7) != 0 )
                KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3[0], 8uLL);
              if ( v12 < BugCheckParameter3[0] )
                KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3[0], v12 - BugCheckParameter3[0]);
              v5 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3));
              if ( v4 >> 3 )
              {
                memset((void *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3)), 0, v4 >> 3);
                v5 += v4 >> 3;
              }
              if ( (v4 & 7) != 0 )
                *v5 = v4 & 7;
            }
          }
        }
      }
      LOBYTE(v1) = KeQueryCurrentStackInformationEx(*(_QWORD *)(a1 + 152), &v11, (char **)BugCheckParameter3, &v12);
      if ( (_BYTE)v1 )
      {
        if ( v11 )
        {
          if ( v11 != 5 && v11 != 7 && (unsigned int)(v11 - 8) >= 2 )
          {
            v6 = v12 - BugCheckParameter3[0];
            if ( KasaniEnabled )
            {
              if ( BugCheckParameter3[0] < 0xFFFF800000000000uLL )
                KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3[0], 0LL);
              if ( (BugCheckParameter3[0] & 7) != 0 )
                KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3[0], 8uLL);
              LOBYTE(v1) = v12;
              if ( v12 < BugCheckParameter3[0] )
                KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3[0], v12 - BugCheckParameter3[0]);
              v7 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3));
              if ( v6 >> 3 )
              {
                LOBYTE(v1) = (unsigned __int8)memset(
                                                (void *)(KasaniShadow + ((BugCheckParameter3[0] + 0x800000000000LL) >> 3)),
                                                0,
                                                v6 >> 3);
                v7 += v6 >> 3;
              }
              if ( (v6 & 7) != 0 )
                *v7 = v6 & 7;
            }
          }
        }
      }
    }
  }
  return (char)v1;
}
