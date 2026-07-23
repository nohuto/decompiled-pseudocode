/*
 * XREFs of PopBcdSetDefaultResumeObjectElements @ 0x140802B24
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140802260 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CE04 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140367918 (CmIsStateSeparationEnabled.c)
 *     wcsrchr @ 0x1403DBCF0 (wcsrchr.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     PopBcdSetupResumeObject @ 0x140801FF8 (PopBcdSetupResumeObject.c)
 *     PopBcdReadElement @ 0x140803164 (PopBcdReadElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 PopBcdSetDefaultResumeObjectElements(HANDLE BcdObjectHandle, HANDLE a2, ...)
{
  wchar_t *v4; // rsi
  char *Pool2; // r14
  NTSTATUS Element; // ebx
  BCD_FLAGS v7; // r8d
  BCD_FLAGS v8; // r8d
  BCD_FLAGS v9; // r8d
  NTSTATUS v10; // eax
  wchar_t *v11; // rbx
  const wchar_t *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // rbx
  ULONG v17; // r15d
  BCD_FLAGS v18; // r8d
  BCD_FLAGS v19; // r8d
  BCD_FLAGS v20; // r8d
  ULONG v21; // ebx
  BCD_FLAGS v22; // r8d
  char v23; // al
  _WORD v25[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG v26; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG BufferSize; // [rsp+38h] [rbp-38h] BYREF
  ULONG v28; // [rsp+3Ch] [rbp-34h]
  wchar_t *Str; // [rsp+40h] [rbp-30h]
  PVOID P; // [rsp+48h] [rbp-28h]
  NTSTATUS ElementDataWithFlags; // [rsp+50h] [rbp-20h]
  NTSTATUS v32; // [rsp+54h] [rbp-1Ch]
  int v33; // [rsp+58h] [rbp-18h]
  _QWORD Buffer[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+40h] BYREF
  va_list va; // [rsp+B0h] [rbp+40h]
  __int64 v37; // [rsp+B8h] [rbp+48h] BYREF
  va_list va1; // [rsp+B8h] [rbp+48h]
  va_list va2; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v35 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  LOWORD(v37) = 0;
  LOWORD(v35) = 0;
  Buffer[0] = 0LL;
  v25[0] = 0;
  P = 0LL;
  v28 = 0;
  v4 = 0LL;
  Str = 0LL;
  Pool2 = 0LL;
  BufferSize = 0;
  Element = PopBcdReadElement(a2, 0x11000001u);
  if ( Element >= 0 )
  {
    Element = PopBcdReadElement(a2, 0x12000002u);
    if ( Element < 0 )
    {
      v4 = Str;
    }
    else
    {
      BufferSize = 8;
      ElementDataWithFlags = BcdGetElementDataWithFlags(a2, 0x15000052u, v7, Buffer, &BufferSize);
      v26 = 2;
      v32 = BcdGetElementDataWithFlags(a2, 0x16000054u, v8, va, &v26);
      v26 = 2;
      v10 = BcdGetElementDataWithFlags(a2, 0x16000046u, v9, v25, &v26);
      v4 = Str;
      v33 = v10;
      v11 = wcsrchr(Str, 0x5Cu);
      if ( v11 )
      {
        v12 = L"winresume.efi";
        if ( dword_140C31AB0 != 2 )
          v12 = L"winresume.exe";
        v13 = -1LL;
        v14 = ((char *)v11 - (char *)v4 + 2) >> 1;
        v15 = -1LL;
        do
          ++v15;
        while ( v12[v15] );
        LODWORD(Str) = 2 * (v14 + v15) + 2;
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)Str, 1684226640LL);
        if ( Pool2 )
        {
          v16 = 2LL * (unsigned int)v14;
          memmove(Pool2, v4, v16);
          do
            ++v13;
          while ( v12[v13] );
          memmove(&Pool2[v16], v12, 2 * v13 + 2);
          v17 = v28;
          Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x11000001u, v18, P, v28);
          if ( Element >= 0 )
          {
            if ( !CmIsStateSeparationEnabled()
              || (Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000005u, v19, P, v17), Element >= 0) )
            {
              Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x12000002u, v19, Pool2, (ULONG)Str);
              if ( Element >= 0 )
              {
                if ( ElementDataWithFlags >= 0 )
                  BcdSetElementDataWithFlags(BcdObjectHandle, 0x15000052u, v20, Buffer, BufferSize);
                v21 = v26;
                if ( v32 >= 0 )
                  BcdSetElementDataWithFlags(BcdObjectHandle, 0x16000054u, v20, va, v26);
                if ( v33 >= 0 )
                  BcdSetElementDataWithFlags(BcdObjectHandle, 0x16000046u, v20, v25, v21);
                Element = PopBcdSetupResumeObject(BcdObjectHandle);
                if ( Element >= 0 )
                {
                  v23 = v37;
                  if ( (_BYTE)KdDebuggerEnabled )
                    v23 = 1;
                  LOBYTE(v37) = v23;
                  Element = BcdSetElementDataWithFlags(BcdObjectHandle, 0x26000006u, v22, va1, 2u);
                  if ( Element >= 0 )
                    Element = 0;
                }
              }
            }
          }
        }
        else
        {
          Element = -1073741670;
        }
      }
      else
      {
        Element = -1073741788;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Element;
}
