/*
 * XREFs of sub_140812F84 @ 0x140812F84
 * Callers:
 *     sub_1403A7778 @ 0x1403A7778 (sub_1403A7778.c)
 *     sub_140800ADC @ 0x140800ADC (sub_140800ADC.c)
 *     sub_140807354 @ 0x140807354 (sub_140807354.c)
 *     sub_140812260 @ 0x140812260 (sub_140812260.c)
 *     sub_140812540 @ 0x140812540 (sub_140812540.c)
 *     sub_1408127B8 @ 0x1408127B8 (sub_1408127B8.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_140A1D808 @ 0x140A1D808 (sub_140A1D808.c)
 *     sub_140A20438 @ 0x140A20438 (sub_140A20438.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 * Callees:
 *     sub_140250FF0 @ 0x140250FF0 (sub_140250FF0.c)
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A7800 @ 0x1403A7800 (sub_1403A7800.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140812F84(__int64 a1, const WCHAR *a2, __int64 a3, unsigned int a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v7; // rbx
  const WCHAR *v8; // rax
  unsigned int i; // r12d
  _DWORD *PoolWithTag; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  void *v15; // rsi
  __int64 v16; // r8
  PVOID v17; // rax
  ULONG NumberOfBytes; // [rsp+30h] [rbp-68h] BYREF
  NTSTATUS NumberOfBytes_4; // [rsp+34h] [rbp-64h]
  ULONG v21; // [rsp+38h] [rbp-60h] BYREF
  int v22[2]; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v7 = a3;
  v8 = a2;
  v21 = 0;
  NumberOfBytes = 0;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    PoolWithTag = 0LL;
    *(_QWORD *)v22 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v8);
    v12 = sub_14025DBFC(a1);
    a1 = v12;
    if ( v7 )
    {
      v14 = sub_140813164(v12, v7, 131097LL, v22);
      NumberOfBytes_4 = v14;
      v15 = *(void **)v22;
      if ( v14 < 0 )
        goto LABEL_11;
    }
    else
    {
      v15 = (void *)v12;
    }
    v14 = sub_1403A7800(v15, &DestinationString, v13, 0LL, 0, &NumberOfBytes);
    NumberOfBytes_4 = v14;
    if ( v14 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_19;
      v14 = sub_1403A7800(v15, &DestinationString, v16, PoolWithTag, NumberOfBytes, &v21);
      NumberOfBytes_4 = v14;
      if ( v14 >= 0 )
      {
        if ( PoolWithTag[1] == a4 )
        {
          NumberOfBytes -= 12;
          v17 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
          *a5 = v17;
          if ( v17 )
          {
            memmove(v17, PoolWithTag + 3, NumberOfBytes);
            *a6 = NumberOfBytes;
            v14 = 0;
          }
          else
          {
LABEL_19:
            v14 = -1073741670;
          }
        }
        else
        {
          sub_1408138F0(4LL, L"Unexpected type for BCD element. Expected type: 0x%x Actual type: 0x%x", a4);
          v14 = -1073741788;
        }
        NumberOfBytes_4 = v14;
      }
    }
LABEL_11:
    if ( v15 != (void *)a1 && v15 )
      sub_140250FF0(v15);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    if ( v14 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v7 = a3;
    v8 = a2;
  }
  return (unsigned int)v14;
}
