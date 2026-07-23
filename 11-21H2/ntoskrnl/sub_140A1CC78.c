/*
 * XREFs of sub_140A1CC78 @ 0x140A1CC78
 * Callers:
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140800ADC @ 0x140800ADC (sub_140800ADC.c)
 *     sub_14081287C @ 0x14081287C (sub_14081287C.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_140A1D1E0 @ 0x140A1D1E0 (sub_140A1D1E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140A1CC78(__int64 a1, _DWORD *a2, GUID *a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int *v5; // r13
  GUID *v6; // rsi
  char v8; // r15
  NTSTATUS result; // eax
  PCWSTR *v10; // rdi
  int v11; // eax
  void *v12; // r14
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // r12
  const WCHAR **v17; // rsi
  int v18; // ebx
  unsigned __int64 v19; // rax
  _QWORD *v20; // r12
  unsigned __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned int v23; // r14d
  ULONG i; // r13d
  int v25; // ebx
  __int64 v26; // rax
  char v27; // [rsp+20h] [rbp-40h]
  ULONG v28; // [rsp+24h] [rbp-3Ch] BYREF
  void *v29; // [rsp+28h] [rbp-38h] BYREF
  PCWSTR *v30; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  void *v32; // [rsp+40h] [rbp-20h] BYREF
  ULONG v33; // [rsp+48h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  GUID *Guid; // [rsp+B0h] [rbp+50h]

  Guid = a3;
  v31 = 0LL;
  v5 = a4;
  v29 = 0LL;
  v6 = a3;
  v28 = 0;
  DestinationString = 0LL;
  if ( !a3 && *a4 || !a5 || !*a2 )
    return -1073741811;
  v27 = sub_1403A7864(a1);
  v8 = v27;
  result = sub_14081369C(v27);
  if ( result >= 0 )
  {
    v32 = 0LL;
    v30 = 0LL;
    v10 = 0LL;
    v11 = sub_140813164(a1, L"Objects", 0x20019u, &v32);
    v12 = v32;
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = sub_14081287C(v32, &v30, &v28);
      v10 = v30;
      v13 = v14;
      if ( v14 >= 0 )
      {
        v15 = 0;
        if ( v28 )
        {
          v16 = v28;
          v17 = v30;
          do
          {
            if ( (int)sub_140813164((__int64)v12, *v17, 0x20019u, &v29) >= 0 )
            {
              v18 = sub_140800ADC((__int64)v29, &v31);
              sub_1408132F0(v29);
              if ( v18 >= 0 )
              {
                if ( (unsigned __int8)sub_140A1D1E0((unsigned int)a2[1], HIDWORD(v31)) )
                  ++v15;
              }
            }
            ++v17;
            --v16;
          }
          while ( v16 );
          v5 = a4;
          v6 = Guid;
        }
        v19 = 24LL * v15;
        if ( v19 > 0xFFFFFFFF
          || (v20 = (_QWORD *)((char *)&v6->Data1 + (unsigned int)v19), v21 = 8LL * v15, v21 > 0xFFFFFFFF)
          || (v22 = v21 + v19, LODWORD(v30) = v21 + v19, (int)v21 + (int)v19 < (unsigned int)v19) )
        {
          v13 = -1073741675;
        }
        else if ( v22 <= *v5 )
        {
          v33 = 0;
          v23 = 0;
          if ( v28 )
          {
            for ( i = v33; i < v28; ++i )
            {
              if ( v23 >= v15 )
                break;
              if ( (int)sub_140813164((__int64)v32, v10[i], 0x20019u, &v29) >= 0 )
              {
                v25 = sub_140800ADC((__int64)v29, &v31);
                sub_1408132F0(v29);
                if ( v25 >= 0 )
                {
                  if ( (unsigned __int8)sub_140A1D1E0((unsigned int)a2[1], HIDWORD(v31)) )
                  {
                    RtlInitUnicodeString(&DestinationString, v10[i]);
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v26 = v31;
                      *(_QWORD *)&Guid[1].Data1 = v20;
                      *v20++ = v26;
                      ++v23;
                      Guid = (GUID *)((char *)Guid + 24);
                    }
                  }
                }
              }
            }
            v22 = (unsigned int)v30;
            v5 = a4;
          }
          v13 = 0;
          *v5 = v22;
          *a5 = v23;
          v12 = v32;
        }
        else
        {
          v13 = -1073741789;
          *v5 = v22;
          *a5 = v15;
        }
        v8 = v27;
      }
    }
    if ( v12 )
      sub_1408132F0(v12);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4B444342u);
    sub_1408134D8(v8);
    return v13;
  }
  return result;
}
