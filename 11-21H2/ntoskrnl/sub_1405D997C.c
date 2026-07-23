/*
 * XREFs of sub_1405D997C @ 0x1405D997C
 * Callers:
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1405D997C(char a1)
{
  const EVENT_DESCRIPTOR *v2; // rsi
  unsigned int v3; // edi
  _BYTE *Pool2; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  __int64 i; // r10
  char v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v13; // [rsp+4Ch] [rbp-45h] BYREF
  int v14; // [rsp+50h] [rbp-41h] BYREF
  int v15; // [rsp+54h] [rbp-3Dh] BYREF
  ULONG MaximumProcessorCount; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int16 *v17[2]; // [rsp+60h] [rbp-31h] BYREF
  __int16 v18; // [rsp+70h] [rbp-21h]
  int v19; // [rsp+72h] [rbp-1Fh]
  __int16 v20; // [rsp+76h] [rbp-1Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-19h] BYREF
  ULONG *p_MaximumProcessorCount; // [rsp+88h] [rbp-9h]
  __int64 v23; // [rsp+90h] [rbp-1h]
  unsigned int *v24; // [rsp+98h] [rbp+7h]
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  int *v26; // [rsp+A8h] [rbp+17h]
  __int64 v27; // [rsp+B0h] [rbp+1Fh]
  _BYTE *v28; // [rsp+B8h] [rbp+27h]
  int v29; // [rsp+C0h] [rbp+2Fh]
  int v30; // [rsp+C4h] [rbp+33h]

  v19 = 0;
  v20 = 0;
  v13 = 0;
  v2 = (const EVENT_DESCRIPTOR *)qword_140038200;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( !a1 )
    v2 = &stru_140039340;
  v3 = *((_DWORD *)qword_140D06998 + 1);
  v12 = v3;
  if ( byte_140C5AE30 )
  {
    if ( EtwEventEnabled(qword_140C1F580, v2) )
    {
      v14 = MaximumProcessorCount * v3;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 10 * MaximumProcessorCount * v3, 1699565648LL);
      if ( Pool2 )
      {
        UserData.Ptr = (ULONGLONG)&v15;
        p_MaximumProcessorCount = &MaximumProcessorCount;
        v24 = &v12;
        v26 = &v14;
        v17[1] = (unsigned __int16 *)qword_140C0B8E8[0];
        v17[0] = (unsigned __int16 *)word_140C0B8E0;
        v15 = (unsigned __int8)byte_140D068E3;
        *(_QWORD *)&UserData.Size = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 4LL;
        v18 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v17) )
        {
          v5 = v13;
          v6 = sub_140348800(v13);
          v7 = v12;
          v8 = 0;
          for ( i = *(_QWORD *)(v6 + 34128); v8 < v12; v7 = v12 )
          {
            v10 = *(_BYTE *)(i + 4LL * v8 + 7);
            v11 = 5LL * (v8 + v5 * v7);
            Pool2[2 * v11 + 8] = *(_BYTE *)(i + 4LL * v8 + 6);
            *(_DWORD *)&Pool2[2 * v11 + 4] = v8++;
            Pool2[2 * v11 + 9] = v10;
            *(_DWORD *)&Pool2[2 * v11] = v5;
          }
        }
        v28 = Pool2;
        v30 = 0;
        v29 = 10 * v14;
        EtwWriteEx(qword_140C1F580, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
