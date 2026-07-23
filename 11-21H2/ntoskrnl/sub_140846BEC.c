/*
 * XREFs of sub_140846BEC @ 0x140846BEC
 * Callers:
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeInitializeDeviceQueue @ 0x1402D3260 (KeInitializeDeviceQueue.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 */

char *__fastcall sub_140846BEC(unsigned int a1, char a2, char a3, char a4, char a5, char a6, char a7, _DWORD *a8)
{
  char v11; // si
  char *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  char *result; // rax
  int v19; // eax
  __int64 v20; // [rsp+28h] [rbp-59h]
  PVOID Object; // [rsp+58h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v23[4]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v24; // [rsp+88h] [rbp+7h]

  Object = 0LL;
  Handle = 0LL;
  v23[0] = 48LL;
  v23[3] = 528LL;
  v11 = 1;
  v23[1] = 0LL;
  if ( !a3 )
    v11 = a2;
  v23[2] = 0LL;
  v24 = 0LL;
  if ( (int)sub_14072B3B0(0, qword_140D06AF8, (int)v23, 0, v20, 640, 0, 0, &Object, 0LL) >= 0 )
  {
    v12 = (char *)Object;
    memset(Object, 0, 0x280uLL);
    if ( ObReferenceObjectByPointer(v12, 0x20000u, qword_140D06AF8, 0) >= 0
      && (int)sub_140729C30(v12, 0LL, 0x20000, 0, 0, 0LL, &Handle) >= 0 )
    {
      ZwClose(Handle);
      *(_DWORD *)v12 = 41943041;
      *((_QWORD *)v12 + 1) = &qword_140006290;
      v12[145] = a6;
      *((_QWORD *)v12 + 15) = 0LL;
      *((_QWORD *)v12 + 16) = 0LL;
      v12[144] = 0;
      *((_QWORD *)v12 + 39) = 0LL;
      v12[338] = 0;
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)(v12 + 176));
      *((_DWORD *)v12 + 56) = a1;
      v12[434] = a4;
      v12[440] = v11;
      v12[441] = a3;
      v12[437] = a7;
      *((_DWORD *)v12 + 93) = -1;
      *((_DWORD *)v12 + 94) = -1;
      *((_DWORD *)v12 + 37) = 2;
      v12[433] = a5 != 0;
      if ( a1 )
        v15 = (1LL << (v11 != 0 ? 32 : 24)) - 1;
      else
        v15 = -1LL;
      *((_QWORD *)v12 + 17) = v15;
      v16 = &unk_140C4DE80;
      if ( v11 )
        v16 = &unk_140C4DF60;
      *((_QWORD *)v12 + 19) = v16;
      if ( *((_QWORD *)v12 + 17) >= v16[17] )
      {
        if ( !a1 )
        {
          *((_DWORD *)v12 + 56) = 0;
          v17 = 0;
          v12[337] = 1;
LABEL_13:
          *a8 = v17;
          result = v12;
          *((_QWORD *)v12 + 63) = 0LL;
          return result;
        }
        if ( a4 )
          v19 = sub_140909214(v12, a1, v13, v14);
        else
          v19 = sub_140908F2C(v12, a1, v13, v14);
        if ( v19 >= 0 )
        {
          v17 = *((_DWORD *)v12 + 56);
          v12[337] = 0;
          goto LABEL_13;
        }
      }
      ObfDereferenceObject(v12);
    }
  }
  return 0LL;
}
