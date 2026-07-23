/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x14099CCB4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140804514 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14080447C (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140804DD8 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdDeleteObject @ 0x140805284 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x1408052E0 (BcdCreateObject.c)
 *     PopBcdReadElement @ 0x140805418 (PopBcdReadElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(void *a1, void *a2, _QWORD *a3)
{
  PVOID v3; // rsi
  int v6; // ebx
  HANDLE v7; // rdi
  BCD_FLAGS v8; // r8d
  NTSTATUS v9; // eax
  BCD_FLAGS v10; // r8d
  BCD_FLAGS v11; // r8d
  BCD_FLAGS v12; // r8d
  BCD_FLAGS v13; // r8d
  ULONG BufferSize; // [rsp+30h] [rbp-29h] BYREF
  ULONG v16; // [rsp+34h] [rbp-25h] BYREF
  ULONG v17; // [rsp+38h] [rbp-21h] BYREF
  PVOID P; // [rsp+40h] [rbp-19h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp-11h] BYREF
  HANDLE BcdObjectHandle; // [rsp+50h] [rbp-9h] BYREF
  PVOID v21; // [rsp+58h] [rbp-1h] BYREF
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+60h] [rbp+7h] BYREF
  GUID v23; // [rsp+68h] [rbp+Fh] BYREF
  GUID Identifier; // [rsp+78h] [rbp+1Fh] BYREF

  P = 0LL;
  v17 = 0;
  v3 = 0LL;
  v16 = 0;
  BcdObjectHandle = 0LL;
  Buffer = 0LL;
  BufferSize = 0;
  v21 = 0LL;
  Description.Version = 1;
  Identifier = 0LL;
  Description.Type = 270532612;
  v23 = 0LL;
  v6 = BcdCreateObject(a1, 0LL, &Description, &BcdObjectHandle);
  if ( v6 < 0 )
  {
    v7 = BcdObjectHandle;
  }
  else
  {
    v6 = PopBcdReadElement(a2, 0x12000004u, &Buffer, &BufferSize);
    if ( v6 < 0 )
    {
      v7 = BcdObjectHandle;
    }
    else
    {
      PopBcdReadElement(a2, 0x12000005u, &v21, &v16);
      v7 = BcdObjectHandle;
      v9 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x12000004u, v8, Buffer, BufferSize);
      v3 = v21;
      v6 = v9;
      if ( v9 >= 0 )
      {
        if ( !v21 || (v6 = BcdSetElementDataWithFlags(v7, 0x12000005u, v10, v21, v16), v6 >= 0) )
        {
          v6 = PopBcdSetDefaultResumeObjectElements(v7, a2);
          if ( v6 >= 0 )
          {
            v23 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            v6 = BcdSetElementDataWithFlags(v7, 0x14000006u, v11, &v23, 0x10u);
            if ( v6 >= 0 )
            {
              if ( (int)PopBcdReadElement(a2, 0x17000077u, &P, &v17) < 0
                || (v6 = BcdSetElementDataWithFlags(v7, 0x17000077u, v12, P, v17), v6 >= 0) )
              {
                v6 = BcdQueryObject(v7, 0, 0LL, &Identifier);
                if ( v6 >= 0 )
                {
                  v6 = BcdSetElementDataWithFlags(a2, 0x23000003u, v13, &Identifier, 0x10u);
                  if ( v6 >= 0 )
                  {
                    *a3 = v7;
                    v7 = 0LL;
                  }
                }
              }
              if ( P )
                ExFreePoolWithTag(P, 0);
            }
          }
        }
      }
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  if ( v7 )
  {
    if ( v6 < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject(v7);
  }
  return (unsigned int)v6;
}
