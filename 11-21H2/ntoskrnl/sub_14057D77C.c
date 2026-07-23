/*
 * XREFs of sub_14057D77C @ 0x14057D77C
 * Callers:
 *     sub_14075CCC8 @ 0x14075CCC8 (sub_14075CCC8.c)
 * Callees:
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14057D77C(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rbx
  unsigned __int16 v7; // r14
  UNICODE_STRING *v8; // rax
  UNICODE_STRING *v9; // rsi
  char *v10; // rdi
  UNICODE_STRING *v11; // rbx
  unsigned __int16 *v12; // r15
  wchar_t *Buffer; // rcx
  int v14; // ebx
  unsigned int v15; // ecx
  ULONG v16; // eax
  unsigned int v17; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 *v19; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-19h]
  __int64 v22; // [rsp+78h] [rbp-11h]
  unsigned int *v23; // [rsp+80h] [rbp-9h]
  __int64 v24; // [rsp+88h] [rbp-1h]
  wchar_t *v25; // [rsp+90h] [rbp+7h]
  int v26; // [rsp+98h] [rbp+Fh]
  int v27; // [rsp+9Ch] [rbp+13h]

  v3 = 0;
  v19 = a1;
  v5 = a3;
  v17 = a3;
  v7 = 0;
  Destination = 0LL;
  if ( qword_140D00B58 && EtwEventEnabled(qword_140D00B58, &stru_140039150) && (_DWORD)v5 && a2 && a1 )
  {
    v8 = (UNICODE_STRING *)sub_1402D84BC(94 * v5);
    v9 = v8;
    if ( v8 )
    {
      v10 = (char *)&v8[v17];
      if ( v17 )
      {
        do
        {
          v11 = &v9[v3];
          *v11 = 0LL;
          v11->Buffer = (wchar_t *)v10;
          v10 += 78;
          v11->MaximumLength = 78;
          sub_1407454A8(a2 + 80LL * v3++, v11, 0LL);
          v7 += v11->Length + 4;
        }
        while ( v3 < v17 );
        v12 = v19;
        if ( v7 )
        {
          Destination.Buffer = (wchar_t *)sub_1402D84BC(v7);
          Buffer = Destination.Buffer;
          if ( Destination.Buffer )
          {
            v14 = 0;
            Destination.MaximumLength = v7;
            if ( v17 )
            {
              while ( RtlAppendUnicodeStringToString(&Destination, &v9[v14]) >= 0 )
              {
                v15 = v17;
                if ( v14 != v17 - 1 )
                {
                  if ( RtlAppendUnicodeToString(&Destination, &word_140438850) < 0 )
                    break;
                  v15 = v17;
                }
                if ( ++v14 >= v15 )
                {
                  Buffer = Destination.Buffer;
                  goto LABEL_18;
                }
              }
            }
            else
            {
LABEL_18:
              UserData.Ptr = *((_QWORD *)v12 + 1);
              v16 = *v12 + 2;
              v22 = 4LL;
              UserData.Size = v16;
              v21 = a2 + 68;
              v23 = &v17;
              v24 = 4LL;
              v26 = Destination.Length + 2;
              v25 = Buffer;
              UserData.Reserved = 0;
              v27 = 0;
              EtwWriteEx(qword_140D00B58, &stru_140039150, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
      }
      ExFreePoolWithTag(v9, 0x6145534Bu);
      _InterlockedIncrement(&dword_140C2A1A4);
    }
    if ( Destination.Buffer )
    {
      ExFreePoolWithTag(Destination.Buffer, 0x6145534Bu);
      _InterlockedIncrement(&dword_140C2A1A4);
    }
  }
}
