/*
 * XREFs of sub_140852FB4 @ 0x140852FB4
 * Callers:
 *     PsTlsAlloc @ 0x140852F80 (PsTlsAlloc.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     sub_1408530AC @ 0x1408530AC (sub_1408530AC.c)
 *     PsTlsFree @ 0x1409B2FC0 (PsTlsFree.c)
 */

__int64 __fastcall sub_140852FB4(__int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ecx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  struct _KTHREAD *v11; // rcx
  int v12; // ebx
  bool v13; // zf
  unsigned int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0;
  v6 = a1;
  v7 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) == 0 )
    goto LABEL_2;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( a3 < 0 || sub_140359DE0(a1) )
  {
LABEL_2:
    v8 = *((_DWORD *)KeGetCurrentThread() + 570);
    if ( (v8 & 3) != 0 )
    {
      return (unsigned int)-1073741749;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      v10 = sub_1408530AC(v8, a2, v6, v7 != 0 ? 0x40000000 : 0, (__int64)&v15);
      v11 = KeGetCurrentThread();
      v12 = v10;
      v13 = (*((_WORD *)v11 + 243))++ == 0xFFFF;
      if ( v13 && *((struct _KTHREAD **)v11 + 19) != (struct _KTHREAD *)((char *)v11 + 152) )
        KiCheckForKernelApcDelivery();
      if ( v12 >= 0 )
      {
        if ( v15 > a2 )
        {
          PsTlsFree(v15);
          return (unsigned int)-1073741801;
        }
        else
        {
          *a4 = v15;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v12;
}
