/*
 * XREFs of sub_140859794 @ 0x140859794
 * Callers:
 *     sub_1408596A4 @ 0x1408596A4 (sub_1408596A4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140859794(__int64 a1)
{
  unsigned int v1; // r13d
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  ULONG v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  _DWORD *Pool2; // rsi
  __int64 v9; // rax
  signed __int64 v10; // rdi
  __int16 v11; // cx
  ULONG v12; // r12d
  unsigned int v13; // r14d
  __int16 v14; // ax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  void *v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v27; // [rsp+50h] [rbp-51h]
  __int64 v28; // [rsp+58h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp-11h] BYREF
  _OWORD KeyInformation[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v32; // [rsp+C0h] [rbp+1Fh]

  v28 = a1;
  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v32 = 0LL;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
LABEL_39:
      v3 = 0;
  }
  else
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 >= 0 && (_DWORD)v32 && (unsigned int)(DWORD1(v32) - 1) <= 0xFFFE )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        v3 = ZwEnumerateValueKey(KeyHandle, v4, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
        if ( ((v3 + 0x80000000) & 0x80000000) == 0 && v3 != -2147483643 )
          break;
        if ( DWORD1(KeyValueInformation) == 4 && DWORD2(KeyValueInformation) >= 2 )
        {
          v5 += DWORD2(KeyValueInformation) + 16;
          if ( v5 < DWORD2(KeyValueInformation) + 16 )
            goto LABEL_44;
          ++v6;
        }
        if ( ++v4 >= (unsigned int)v32 )
        {
          if ( !v6 )
            goto LABEL_39;
          v7 = v5 + 8;
          if ( v5 + 8 < v5 )
          {
LABEL_44:
            v3 = -1073741675;
            break;
          }
          Length = DWORD1(v32) + 16;
          v3 = 0;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(DWORD1(v32) + 16), 1668499779LL);
          if ( Pool2 )
          {
            v9 = ExAllocatePool2(256LL, v7, 1668499779LL);
            v10 = v9;
            if ( v9 )
            {
              v11 = -1;
              *(_DWORD *)(v9 + 4) = 0xFFFF;
              v12 = 0;
              v27 = (void *)(16LL * v6 + v9 + 8);
              v13 = v7 - (16 * v6 + 8);
              v14 = 0;
              if ( (_DWORD)v32 )
              {
                while ( 1 )
                {
                  v3 = ZwEnumerateValueKey(KeyHandle, v12, KeyValueBasicInformation, Pool2, Length, &ResultLength);
                  if ( v3 < 0 )
                    break;
                  if ( Pool2[1] == 4 )
                  {
                    v15 = Pool2[2];
                    if ( v15 >= 2 )
                    {
                      v16 = Pool2[2];
                      do
                      {
                        if ( *((_WORD *)Pool2 + ((unsigned __int64)v15 >> 1) + 5) )
                          break;
                        Pool2[2] = v15 - 2;
                        v15 -= 2;
                        v16 = v15;
                      }
                      while ( v15 >= 2 );
                      if ( v16 )
                      {
                        if ( v16 > v13 || v1 >= v6 )
                        {
                          v3 = -2147483643;
                          break;
                        }
                        v17 = *(unsigned __int16 *)(v10 + 4);
                        v18 = v27;
                        if ( v17 >= v16 )
                          LOWORD(v17) = v16;
                        v19 = *(unsigned __int16 *)(v10 + 6);
                        *(_WORD *)(v10 + 4) = v17;
                        if ( v19 <= Pool2[2] )
                          LOWORD(v19) = Pool2[2];
                        *(_WORD *)(v10 + 6) = v19;
                        v20 = 2LL * v1;
                        *(_QWORD *)(v10 + 8 * v20 + 16) = v18;
                        *(_WORD *)(v10 + 8 * v20 + 8) = *((_WORD *)Pool2 + 4);
                        *(_WORD *)(v10 + 8 * v20 + 10) = *((_WORD *)Pool2 + 4);
                        memmove(v18, Pool2 + 3, (unsigned int)Pool2[2]);
                        v21 = (unsigned int)Pool2[2];
                        v27 = (char *)v27 + v21;
                        v13 -= v21;
                        ++v1;
                      }
                    }
                  }
                  if ( ++v12 >= (unsigned int)v32 )
                  {
                    v11 = *(_WORD *)(v10 + 4);
                    v14 = *(_WORD *)(v10 + 6);
                    goto LABEL_32;
                  }
                }
              }
              else
              {
LABEL_32:
                *(_DWORD *)v10 = v1;
                *(_WORD *)(v10 + 4) = v11 + 8;
                v22 = v28;
                *(_WORD *)(v10 + 6) = v14 + 8;
                v10 &= -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 40), v10, 0LL) != 0);
              }
              if ( v10 )
                ExFreePoolWithTag((PVOID)v10, 0x63734943u);
            }
            else
            {
              v3 = -1073741801;
            }
            ExFreePoolWithTag(Pool2, 0x63734943u);
          }
          else
          {
            v3 = -1073741801;
          }
          break;
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
