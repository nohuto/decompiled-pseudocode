/*
 * XREFs of WheapLogInitEvent @ 0x14085699C
 * Callers:
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void WheapLogInitEvent()
{
  void *Pool2; // rax
  void *v1; // rdi
  PDRIVER_CONTROL DeviceRoutine; // rbx
  _DWORD *v3; // rax
  void *v4; // rbx
  unsigned int Size; // [rsp+30h] [rbp-9h] BYREF
  int Size_4; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+50h] [rbp+17h]
  int v9; // [rsp+58h] [rbp+1Fh]
  int v10; // [rsp+5Ch] [rbp+23h]
  unsigned int *p_Size; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  void *v14; // [rsp+70h] [rbp+37h]
  unsigned int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  Size = 1072 * dword_140CF7A5C;
  Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)(1072 * dword_140CF7A5C), 1634035799LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, Size);
    DeviceRoutine = WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    UserData.Reserved = 0;
    v10 = 0;
    v13 = 0;
    v16 = 0;
    UserData.Ptr = (ULONGLONG)&dword_140CF7A5C;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    v15 = Size;
    UserData.Size = 4;
    Size_4 = 10;
    v9 = 4;
    v12 = 4;
    v14 = v1;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceRoutine, &EVENT_WHEA_INIT_OP) == 1 )
      EtwWrite((REGHANDLE)DeviceRoutine, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
    v3 = (_DWORD *)ExAllocatePool2(66LL, 32LL, 1634035799LL);
    v4 = v3;
    if ( v3 )
    {
      v3[3] = 0;
      v3[7] = 0;
      *v3 = 1733060695;
      v3[1] = 1;
      v3[2] = 32;
      v3[5] = -2147483646;
      v3[4] = 1280201291;
      v3[6] = 2;
      WheaLogInternalEvent(v3);
      ExFreePoolWithTag(v4, 0x61656857u);
    }
    ExFreePoolWithTag(v1, 0x61656857u);
  }
}
