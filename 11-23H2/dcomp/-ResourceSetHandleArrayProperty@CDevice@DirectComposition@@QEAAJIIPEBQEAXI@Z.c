/*
 * XREFs of ?ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z @ 0x1800F424C
 * Callers:
 *     ?SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z @ 0x1800FAC8C (-SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z.c)
 *     ?SetAdapterLuidAndBuffers@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAJAEBU_LUID@@IPEAPEAX@Z @ 0x180180320 (-SetAdapterLuidAndBuffers@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAJAEBU_LUID@@I.c)
 * Callees:
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::ResourceSetHandleArrayProperty(
        DirectComposition::CDevice *this,
        int a2,
        __int64 a3,
        void *const *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // ecx
  __int64 v10; // rdi
  unsigned int v11; // eax
  _DWORD *v12; // rax
  char *v13; // rcx
  signed __int64 v14; // rsi
  _DWORD *v16; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  if ( a2 )
  {
    v9 = -1;
    v16 = 0LL;
    v10 = a5;
    if ( 8 * (unsigned __int64)a5 > 0xFFFFFFFF )
    {
      return (unsigned int)-2147024362;
    }
    else
    {
      v11 = 8 * a5 + 16;
      if ( v11 >= 0x10 )
        v9 = 8 * a5 + 16;
      v5 = 8 * a5 >= 0xFFFFFFF0 ? 0x80070216 : 0;
      if ( v11 >= 0x10 )
      {
        DirectComposition::CDevice::BeginKernelCommand(this, v9, (void **)&v16, 0);
        v12 = v16;
        *v16 = 11;
        v13 = (char *)(v12 + 4);
        v12[1] = a2;
        v12[2] = 3;
        v12[3] = a5;
        if ( a5 )
        {
          v14 = (char *)a4 - v13;
          do
          {
            *(_QWORD *)v13 = *(_QWORD *)&v13[v14];
            v13 += 8;
            --v10;
          }
          while ( v10 );
        }
        v5 = DirectComposition::CDevice::TryFlushKernelCommands(this, 0);
        DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
      }
    }
  }
  return v5;
}
