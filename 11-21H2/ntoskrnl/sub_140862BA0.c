/*
 * XREFs of sub_140862BA0 @ 0x140862BA0
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_140766E4C @ 0x140766E4C (sub_140766E4C.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140946900 @ 0x140946900 (sub_140946900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140862BA0(HANDLE Handle, UNICODE_STRING *a2)
{
  int v2; // r15d
  HANDLE v4; // rbx
  NTSTATUS result; // eax
  unsigned int v6; // edi
  NTSTATUS v7; // esi
  unsigned int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rbx
  int v15; // r15d
  struct _KTHREAD *v16; // rax
  int v17; // r14d
  unsigned int i; // ebx
  __int64 v19; // rax
  unsigned int *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-89h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-61h] BYREF
  int v26; // [rsp+5Ch] [rbp-5Dh]
  WCHAR *v27; // [rsp+60h] [rbp-59h] BYREF
  PVOID P; // [rsp+68h] [rbp-51h] BYREF
  HANDLE v29; // [rsp+70h] [rbp-49h] BYREF
  int Data; // [rsp+78h] [rbp-41h] BYREF
  PVOID v31[2]; // [rsp+80h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  WCHAR v33[20]; // [rsp+C0h] [rbp+7h] BYREF

  P = 0LL;
  v2 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v29 = Handle;
  v4 = Handle;
  v26 = 0;
  *(_OWORD *)v31 = 0LL;
  if ( Handle )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ValueName.Buffer = L"Enum";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 655368;
    ObjectAttributes.Attributes = 576;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = sub_14067B470(a2, 0x20019u, &v29, &KeyHandle, 0);
    v4 = v29;
    v2 = 1;
    v26 = 1;
  }
  if ( result >= 0 )
  {
    ValueName.Buffer = L"INITSTARTFAILED";
    *(_DWORD *)&ValueName.Length = 2097182;
    Data = 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    v6 = 0;
    v7 = sub_14067B838(KeyHandle, L"Count", 0, &P);
    if ( v7 < 0 )
      goto LABEL_44;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( v6 )
    {
      v8 = 0;
      v25 = v6;
      do
      {
        if ( (int)sub_140946900(v4, a2, v8, v31) >= 0 )
        {
          v9 = sub_140779C10((__int64)v31, 0x746C6644u);
          v10 = v9;
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9[39] + 40LL);
            if ( v11 )
            {
              if ( !sub_1402DEAB0(v11) )
                sub_140766A5C(v12, 1);
            }
          }
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
          if ( v10 )
          {
            v14 = *(_QWORD *)(v10[39] + 40LL);
            if ( v14 && (*(_DWORD *)(v14 + 396) & 1) != 0 && (unsigned int)(*(_DWORD *)(v14 + 300) - 777) <= 1 )
            {
              sub_140766E4C((ULONG_PTR *)v14);
              sub_1402DE844(v14, 788);
              sub_140765114(v14, 24, 0);
            }
            ObfDereferenceObject(v10);
          }
          ExFreePoolWithTag(v31[1], 0);
          ExReleaseResourceLite(&stru_140C462A0);
          KeLeaveCriticalRegion();
          v4 = v29;
        }
        ++v8;
      }
      while ( v8 < v6 );
      v15 = v26;
      if ( v25 != v6 )
      {
        v16 = KeGetCurrentThread();
        --*((_WORD *)v16 + 242);
        ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
        if ( v25 )
        {
          v17 = 0;
          for ( i = 0; i < v6; ++i )
          {
            LODWORD(v22) = i;
            v27 = v33;
            sub_1402DFBC4(v33, 0xAuLL, &v27, 0LL, 0, L"%u", v22);
            ValueName.MaximumLength = 20;
            v19 = v27 - v33;
            if ( (_DWORD)v19 == -1 )
              ValueName.Length = 20;
            else
              ValueName.Length = 2 * v19;
            ValueName.Buffer = v33;
            if ( sub_14067B838(KeyHandle, v33, 0, &P) >= 0 )
            {
              v20 = (unsigned int *)P;
              if ( i != v17 )
              {
                ZwDeleteValueKey(KeyHandle, &ValueName);
                LODWORD(v22) = v17;
                v27 = v33;
                sub_1402DFBC4(v33, 0xAuLL, &v27, 0LL, 0, L"%u", v22);
                ValueName.MaximumLength = 20;
                v21 = v27 - v33;
                if ( (_DWORD)v21 == -1 )
                  ValueName.Length = 20;
                else
                  ValueName.Length = 2 * v21;
                ValueName.Buffer = v33;
                ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)v20 + v20[2], v20[3]);
              }
              ExFreePoolWithTag(v20, 0);
              ++v17;
            }
          }
          v15 = v26;
        }
        ValueName.Buffer = L"Count";
        *(_DWORD *)&ValueName.Length = 786442;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v25, 4u);
        ValueName.Buffer = L"NextInstance";
        *(_DWORD *)&ValueName.Length = 1703960;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v25, 4u);
        ExReleaseResourceLite(&stru_140C462A0);
        KeLeaveCriticalRegion();
        v4 = v29;
      }
      ZwClose(KeyHandle);
      if ( v15 )
        ZwClose(v4);
      return 0;
    }
    else
    {
LABEL_44:
      ZwClose(KeyHandle);
      if ( v2 )
        ZwClose(v4);
      return v7;
    }
  }
  return result;
}
