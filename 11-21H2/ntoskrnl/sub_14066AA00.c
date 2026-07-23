/*
 * XREFs of sub_14066AA00 @ 0x14066AA00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14066AC1C @ 0x14066AC1C (sub_14066AC1C.c)
 *     sub_14066B464 @ 0x14066B464 (sub_14066B464.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_1407B0EB0 @ 0x1407B0EB0 (sub_1407B0EB0.c)
 *     sub_14080C0F4 @ 0x14080C0F4 (sub_14080C0F4.c)
 */

__int64 __fastcall sub_14066AA00(
        HANDLE Handle,
        __int64 a2,
        int a3,
        volatile void *a4,
        SIZE_T Length,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v10; // bl
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  NTSTATUS v14; // ebx
  int v15; // r9d
  PVOID v16; // r15
  ULONG_PTR v17; // r14
  int v18; // edi
  int v19; // edi
  NTSTATUS v20; // eax
  int v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v25[2]; // [rsp+40h] [rbp-28h] BYREF

  v23 = 0;
  v25[0] = 0LL;
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  sub_1407B0EB0(a2, &v22, &v23);
  if ( v10 )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v11 = a6;
    if ( a6 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( a6 < 0x7FFFFFFF0000LL )
        v12 = a6;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = a6;
  }
  v13 = v22;
  if ( !v22 )
  {
    v14 = -1073741811;
    goto LABEL_19;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, qword_140D069D8, v10, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v16 = Object;
    v14 = sub_1407ABD80((_DWORD)Object, v13, v23, v15, (__int64)v25);
    if ( v14 < 0 )
    {
LABEL_18:
      ObfDereferenceObject(v16);
      goto LABEL_19;
    }
    v17 = v25[0];
    if ( !*(_QWORD *)(v25[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_17;
    }
    if ( a3 )
    {
      v18 = a3 - 1;
      if ( !v18 )
      {
        v20 = sub_14080C0F4((_DWORD)v16, v25[0], (_DWORD)a4, Length, v11);
        goto LABEL_16;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v20 = sub_14066AC1C((_DWORD)v16, v25[0], (_DWORD)a4, Length, v11);
LABEL_16:
          v14 = v20;
LABEL_17:
          sub_1407A7628(v17);
          goto LABEL_18;
        }
      }
      else if ( !a4 && !(_DWORD)Length && !v11 )
      {
        v14 = (*(_DWORD *)(v25[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_17;
      }
      v14 = -1073741811;
      goto LABEL_17;
    }
    v20 = sub_14066B464((_DWORD)v16, v25[0], (_DWORD)a4, Length, v11);
    goto LABEL_16;
  }
LABEL_19:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
