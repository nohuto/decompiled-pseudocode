/*
 * XREFs of sub_140514F70 @ 0x140514F70
 * Callers:
 *     sub_1403CD570 @ 0x1403CD570 (sub_1403CD570.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlCmDecodeMemIoResource @ 0x140388BD0 (RtlCmDecodeMemIoResource.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405043D8 @ 0x1405043D8 (sub_1405043D8.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 */

__int64 __fastcall sub_140514F70(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  struct _DEVICE_OBJECT *v5; // r12
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  _BYTE *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 i; // rsi
  __int64 v17; // r14
  _DWORD *v18; // r13
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v19; // rcx
  ULONGLONG v20; // rax
  ULONGLONG v21; // rcx
  ULONGLONG v22; // rax
  __int64 v23; // rcx
  _QWORD v25[18]; // [rsp+30h] [rbp-39h] BYREF
  ULONG BufferLength; // [rsp+D8h] [rbp+6Fh] BYREF
  int v27; // [rsp+E0h] [rbp+77h]
  ULONGLONG Start; // [rsp+E8h] [rbp+7Fh] BYREF

  Start = 0LL;
  BufferLength = 0;
  memset(v25, 0, 0x58uLL);
  v2 = 0LL;
  v3 = 0;
  if ( (int)sub_1405043D8(a1, v25) >= 0 )
  {
    if ( v25[9] )
    {
      v5 = (struct _DEVICE_OBJECT *)sub_14042A5E0(v25[1], v4);
      if ( IoGetDeviceProperty(v5, DevicePropertyAllocatedResources, 0, 0LL, &BufferLength) == -1073741789 )
      {
        v7 = (_DWORD *)sub_1403B1F04(v6, BufferLength);
        if ( v7 )
        {
          if ( IoGetDeviceProperty(v5, DevicePropertyAllocatedResources, BufferLength, v7, &BufferLength) >= 0 )
          {
            if ( *v7 )
            {
              v8 = (__int64)(v7 + 5);
              v9 = (unsigned int)*v7;
              do
              {
                v10 = *(_DWORD *)(v8 - 4);
                if ( v10 )
                {
                  v11 = (_BYTE *)v8;
                  v12 = v10;
                  do
                  {
                    if ( ((*v11 - 3) & 0xFB) == 0 )
                      ++v3;
                    v11 += 20;
                    --v12;
                  }
                  while ( v12 );
                }
                v8 += 36LL;
                --v9;
              }
              while ( v9 );
            }
            v27 = v3 + dword_140C4BD18;
            BufferLength = 32 * (v3 + dword_140C4BD18);
            v2 = sub_1403B1F04(v8, BufferLength);
            if ( v2 )
            {
              v13 = qword_140C4BD28;
              v14 = 0;
              while ( v13 )
              {
                v15 = 32LL * v14++;
                *(_QWORD *)(v15 + v2 + 8) = *(_QWORD *)(v13 + 8);
                *(_QWORD *)(v15 + v2 + 16) = *(_QWORD *)(v13 + 16);
                *(_BYTE *)(v15 + v2 + 24) = *(_BYTE *)(v13 + 24);
                *(_QWORD *)(v15 + v2) = v2 + 32LL * v14;
                v13 = *(_QWORD *)v13;
              }
              for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
              {
                v17 = 0LL;
                v18 = &v7[8 * i + 3 + (unsigned int)i];
                if ( v18[1] )
                {
                  do
                  {
                    v19 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v18[4 * v17 + 2 + (unsigned int)v17];
                    if ( ((v19->Type - 3) & 0xFB) == 0 )
                    {
                      v20 = RtlCmDecodeMemIoResource(v19, &Start);
                      v21 = Start - (Start & 0xFFFFFF8000000000uLL);
                      Start &= 0xFFFFFF8000000000uLL;
                      v22 = v21 + v20;
                      v23 = 32LL * v14;
                      *(_QWORD *)(v23 + v2 + 8) = Start;
                      *(_BYTE *)(v23 + v2 + 24) = 0;
                      *(_QWORD *)(v23 + v2 + 16) = ((v22 + 0x7FFFFFFFFFLL) >> 12) & 0xFFFFFF8000000LL;
                      *(_QWORD *)(v23 + v2) = v2 + 32LL * ++v14;
                    }
                    v17 = (unsigned int)(v17 + 1);
                  }
                  while ( (unsigned int)v17 < v18[1] );
                }
              }
              v8 = 32LL * (unsigned int)(v27 - 1);
              *(_QWORD *)(v8 + v2) = 0LL;
            }
          }
          sub_1403B1B5C(v8, (__int64)v7);
        }
      }
      if ( v5 )
        ObfDereferenceObjectWithTag(v5, 0x746C6644u);
    }
    sub_14042A5E0(v25[1], v4);
  }
  return v2;
}
